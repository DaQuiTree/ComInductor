/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFormLayout *formLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_PortStatus;
    QFormLayout *formLayout_2;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox_port;
    QSpacerItem *verticalSpacer_3;
    QComboBox *comboBox_baudrate;
    QSpacerItem *verticalSpacer_2;
    QComboBox *comboBox_Parity;
    QFormLayout *formLayout;
    QPushButton *pButton_Start;
    QPushButton *pButton_Reset;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QTableWidget *panelTable;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(481, 276);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        formLayout_3 = new QFormLayout(centralWidget);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_PortStatus = new QLabel(centralWidget);
        label_PortStatus->setObjectName(QStringLiteral("label_PortStatus"));
        label_PortStatus->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_PortStatus);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        comboBox_port = new QComboBox(centralWidget);
        comboBox_port->setObjectName(QStringLiteral("comboBox_port"));

        verticalLayout->addWidget(comboBox_port);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        comboBox_baudrate = new QComboBox(centralWidget);
        comboBox_baudrate->setObjectName(QStringLiteral("comboBox_baudrate"));

        verticalLayout->addWidget(comboBox_baudrate);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        comboBox_Parity = new QComboBox(centralWidget);
        comboBox_Parity->setObjectName(QStringLiteral("comboBox_Parity"));

        verticalLayout->addWidget(comboBox_Parity);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, verticalLayout);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        pButton_Start = new QPushButton(centralWidget);
        pButton_Start->setObjectName(QStringLiteral("pButton_Start"));

        formLayout->setWidget(0, QFormLayout::LabelRole, pButton_Start);

        pButton_Reset = new QPushButton(centralWidget);
        pButton_Reset->setObjectName(QStringLiteral("pButton_Reset"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pButton_Reset);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::SpanningRole, verticalSpacer_5);


        formLayout_2->setLayout(2, QFormLayout::LabelRole, formLayout);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(1, QFormLayout::SpanningRole, verticalSpacer_4);


        verticalLayout_2->addLayout(formLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);

        panelTable = new QTableWidget(centralWidget);
        if (panelTable->columnCount() < 3)
            panelTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        panelTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        panelTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        panelTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (panelTable->rowCount() < 32)
            panelTable->setRowCount(32);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem3->setFont(font);
        panelTable->setItem(0, 0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        panelTable->setItem(0, 1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        panelTable->setItem(0, 2, __qtablewidgetitem5);
        panelTable->setObjectName(QStringLiteral("panelTable"));
        panelTable->setMinimumSize(QSize(350, 230));
        panelTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        panelTable->setTabKeyNavigation(true);
        panelTable->setAlternatingRowColors(false);
        panelTable->setTextElideMode(Qt::ElideRight);
        panelTable->setRowCount(32);
        panelTable->setColumnCount(3);
        panelTable->horizontalHeader()->setVisible(true);
        panelTable->horizontalHeader()->setCascadingSectionResizes(false);
        panelTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        panelTable->verticalHeader()->setVisible(true);
        panelTable->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        horizontalLayout->addWidget(panelTable);


        formLayout_3->setLayout(0, QFormLayout::LabelRole, horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\256\241\346\255\245\345\231\250\346\250\241\346\213\237\345\231\250", Q_NULLPTR));
        label_PortStatus->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\267\262\345\205\263\351\227\255", Q_NULLPTR));
        comboBox_baudrate->clear();
        comboBox_baudrate->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "57600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "38400", Q_NULLPTR)
         << QApplication::translate("MainWindow", "19200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9600", Q_NULLPTR)
        );
        comboBox_baudrate->setCurrentText(QApplication::translate("MainWindow", "115200", Q_NULLPTR));
        comboBox_Parity->clear();
        comboBox_Parity->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "None", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Even", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Odd", Q_NULLPTR)
        );
        pButton_Start->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        pButton_Reset->setText(QApplication::translate("MainWindow", "Reset", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = panelTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\350\256\241\346\255\245\345\231\250\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = panelTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\346\255\245\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = panelTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\346\225\205\351\232\234", Q_NULLPTR));

        const bool __sortingEnabled = panelTable->isSortingEnabled();
        panelTable->setSortingEnabled(false);
        panelTable->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
