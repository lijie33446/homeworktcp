/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Ip;
    QLineEdit *lineEdit_Ip;
    QLabel *label_Port;
    QLineEdit *lineEdit_Port;
    QTextEdit *textEdit_Recv;
    QTextEdit *textEdit_Send;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Connect;
    QPushButton *pushButton_Send;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_Ip = new QLabel(centralWidget);
        label_Ip->setObjectName(QString::fromUtf8("label_Ip"));

        horizontalLayout->addWidget(label_Ip);

        lineEdit_Ip = new QLineEdit(centralWidget);
        lineEdit_Ip->setObjectName(QString::fromUtf8("lineEdit_Ip"));

        horizontalLayout->addWidget(lineEdit_Ip);

        label_Port = new QLabel(centralWidget);
        label_Port->setObjectName(QString::fromUtf8("label_Port"));

        horizontalLayout->addWidget(label_Port);

        lineEdit_Port = new QLineEdit(centralWidget);
        lineEdit_Port->setObjectName(QString::fromUtf8("lineEdit_Port"));

        horizontalLayout->addWidget(lineEdit_Port);


        verticalLayout->addLayout(horizontalLayout);

        textEdit_Recv = new QTextEdit(centralWidget);
        textEdit_Recv->setObjectName(QString::fromUtf8("textEdit_Recv"));

        verticalLayout->addWidget(textEdit_Recv);

        textEdit_Send = new QTextEdit(centralWidget);
        textEdit_Send->setObjectName(QString::fromUtf8("textEdit_Send"));

        verticalLayout->addWidget(textEdit_Send);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_Connect = new QPushButton(centralWidget);
        pushButton_Connect->setObjectName(QString::fromUtf8("pushButton_Connect"));

        horizontalLayout_2->addWidget(pushButton_Connect);

        pushButton_Send = new QPushButton(centralWidget);
        pushButton_Send->setObjectName(QString::fromUtf8("pushButton_Send"));

        horizontalLayout_2->addWidget(pushButton_Send);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "TCP Client", 0, QApplication::UnicodeUTF8));
        label_Ip->setText(QApplication::translate("MainWindow", "ip address:", 0, QApplication::UnicodeUTF8));
        label_Port->setText(QApplication::translate("MainWindow", "port:", 0, QApplication::UnicodeUTF8));
        pushButton_Connect->setText(QApplication::translate("MainWindow", "connect", 0, QApplication::UnicodeUTF8));
        pushButton_Send->setText(QApplication::translate("MainWindow", "send", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
