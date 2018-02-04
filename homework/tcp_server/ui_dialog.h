/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTextBrowser *msg;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *sendMsg;
    QPushButton *sendBtn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *objectBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *clearBtn;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *num;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(654, 488);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        msg = new QTextBrowser(Dialog);
        msg->setObjectName(QString::fromUtf8("msg"));

        verticalLayout->addWidget(msg);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        sendMsg = new QLineEdit(Dialog);
        sendMsg->setObjectName(QString::fromUtf8("sendMsg"));

        horizontalLayout_3->addWidget(sendMsg);

        sendBtn = new QPushButton(Dialog);
        sendBtn->setObjectName(QString::fromUtf8("sendBtn"));

        horizontalLayout_3->addWidget(sendBtn);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        objectBox = new QComboBox(Dialog);
        objectBox->setObjectName(QString::fromUtf8("objectBox"));

        horizontalLayout_2->addWidget(objectBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        clearBtn = new QPushButton(Dialog);
        clearBtn->setObjectName(QString::fromUtf8("clearBtn"));

        horizontalLayout_2->addWidget(clearBtn);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        num = new QLabel(Dialog);
        num->setObjectName(QString::fromUtf8("num"));

        horizontalLayout->addWidget(num);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "TCP Server", 0, QApplication::UnicodeUTF8));
        sendBtn->setText(QApplication::translate("Dialog", "send", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "send to  \357\274\232", 0, QApplication::UnicodeUTF8));
        clearBtn->setText(QApplication::translate("Dialog", "empty item", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "current connections\357\274\232", 0, QApplication::UnicodeUTF8));
        num->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
