#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "yielddata.h"
#include "crc.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mSerialPort = new QSerialPort;

    //PushButoon Slot
    QObject::connect(ui->pButton_Start, SIGNAL(clicked(bool)), this, SLOT(StartSlot()));
    QObject::connect(ui->pButton_Reset, SIGNAL(clicked(bool)), this, SLOT(ResetSlot()));
    QObject::connect(this->mSerialPort, SIGNAL(readyRead()), this, SLOT(HandlingReadDataSlot()));

    qsrand(10);//产生随机数
    GenericPanel();//产生随机数

    //Init UI
    InitUI();
}

MainWindow::~MainWindow()
{
    delete mSerialPort;
    delete ui;
}

void MainWindow::StartSlot()
{
    QSerialPort::BaudRate mBaudRate;
    QSerialPort::Parity mParity;
    static bool portStatus = 0;

    if(!portStatus)
    {
        mSerialPort->setPortName(ui->comboBox_port->currentText());//port

        switch(ui->comboBox_baudrate->currentIndex())//baudRate
        {
            case 0: mBaudRate = QSerialPort::Baud115200; break;
            case 1: mBaudRate = QSerialPort::Baud57600; break;
            case 2: mBaudRate = QSerialPort::Baud38400; break;
            case 3: mBaudRate = QSerialPort::Baud19200; break;
            case 4: mBaudRate = QSerialPort::Baud9600; break;
            default: mBaudRate = QSerialPort::Baud57600; break;
        }
        mSerialPort->setBaudRate(mBaudRate);

        switch(ui->comboBox_Parity->currentIndex())//baudRate
        {
            case 0: mParity = QSerialPort::NoParity; break;
            case 1: mParity = QSerialPort::EvenParity; break;
            case 2: mParity = QSerialPort::OddParity; break;
            default: mParity = QSerialPort::NoParity; break;
        }
        mSerialPort->setParity(mParity);

        mSerialPort->setDataBits(QSerialPort::Data8); //other
        mSerialPort->setStopBits(QSerialPort::OneStop);
        mSerialPort->setFlowControl(QSerialPort::NoFlowControl);

        portStatus = mSerialPort->open(QIODevice::ReadWrite);
        if(portStatus){
            ui->label_PortStatus->setText("串口已开启");
            ui->pButton_Start->setText("close");
        }else{
            ui->label_PortStatus->setText("打开失败");
        }
    }else{
        mSerialPort->close();
        portStatus = 0;
        ui->label_PortStatus->setText("串口已关闭");
        ui->pButton_Start->setText("start");
    }
}

void MainWindow::ResetSlot()
{
    GenericPanel();
    FillTable();
}

void MainWindow::InitUI()
{
    //Init combobox baudrate & parity
    ui->comboBox_baudrate->setCurrentText("57600");//57600
    ui->comboBox_Parity->setCurrentText("None");//

    //Init Serial Port
    QList<QSerialPortInfo> portList;
    QSerialPortInfo *mSerialPortInfo = new QSerialPortInfo;

    portList = mSerialPortInfo->availablePorts();
    for(int i=0; i < portList.count(); i++)
    {
        ui->comboBox_port->addItem(portList.at(i).portName());
    }
    delete mSerialPortInfo;
    FillTable();
}

void MainWindow::HandlingReadDataSlot()
{
    QByteArray buffer;
    QByteArray cmdRead;
    ushort mv,cv,crcCheck;
    bool bc;

    if(mSerialPort->bytesAvailable() >= 2){
        buffer = mSerialPort->readAll();
        if(0x55 == buffer[1]) //校验通过...
        {
            yd[buffer[0]-1].GetData(mv,cv,bc);
            cmdRead = QByteArray::fromHex("30301100008F0000000000000000000000000000000000000000000000000020000C0000000401518D");
            cmdRead[4] = (uchar)(mv>>8);
            cmdRead[5] = (uchar)mv;
            cmdRead[36] = (uchar)(cv>>8);
            cmdRead[37] = (uchar)cv;
            cmdRead[38] =(uchar)buffer[0];
            crcCheck = generic_crc(39,(unsigned char*)cmdRead.data());
            qDebug() << crcCheck;
            cmdRead[39] = (uchar)crcCheck;
            cmdRead[40] = (uchar)(crcCheck>>8);
            mSerialPort->write(cmdRead);
        }
    }

}

void MainWindow::GenericPanel()
{
    for(int i = 0; i < 32; i++)
    {
        yd[i].GenericData();
    }
}

void MainWindow::FillTable()
{
    QTableWidgetItem *item;
    QByteArray array[2];
    ushort mv, cv;
    QString str1,str2;
    bool bc;

    for(int i = 0; i < 32; i++)
    {
        yd[i].GetData(mv,cv,bc);

        str1 = array[0].setNum(mv,16);
        str2 = array[1].setNum(cv,16);

        item = new QTableWidgetItem();
        int len = str1.length();
        for(int j = 0; j < 4-len; j++){
            str1.insert(0,"0");
        }
        str1.insert(0,"30301100");
        item->setText(str1.toUpper());
        item->setTextAlignment(Qt::AlignRight);
        ui->panelTable->setItem(i,0,item);

        item = new QTableWidgetItem();
        len = str2.length();
        for(int j = 0; j < 4-len; j++){
            str2.insert(0,"0");
        }
        item->setText(str2.toUpper());
        item->setTextAlignment(Qt::AlignRight);
        ui->panelTable->setItem(i,1,item);
    }
}
