/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Thu Aug 9 14:49:08 2018
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *lineEditLocalTempValue;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButtonGetTemp;
    QPushButton *pushButtonClear;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEditServerIp;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEditServerPort;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEditServerNum;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonTest;
    QPushButton *pushButtonSend;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(382, 313);
        verticalLayout_3 = new QVBoxLayout(Widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        lineEditLocalTempValue = new QLineEdit(groupBox_2);
        lineEditLocalTempValue->setObjectName(QString::fromUtf8("lineEditLocalTempValue"));

        horizontalLayout_6->addWidget(lineEditLocalTempValue);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButtonGetTemp = new QPushButton(groupBox_2);
        pushButtonGetTemp->setObjectName(QString::fromUtf8("pushButtonGetTemp"));

        horizontalLayout_7->addWidget(pushButtonGetTemp);

        pushButtonClear = new QPushButton(groupBox_2);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));

        horizontalLayout_7->addWidget(pushButtonClear);


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEditServerIp = new QLineEdit(groupBox);
        lineEditServerIp->setObjectName(QString::fromUtf8("lineEditServerIp"));

        horizontalLayout->addWidget(lineEditServerIp);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEditServerPort = new QLineEdit(groupBox);
        lineEditServerPort->setObjectName(QString::fromUtf8("lineEditServerPort"));

        horizontalLayout_2->addWidget(lineEditServerPort);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lineEditServerNum = new QLineEdit(groupBox);
        lineEditServerNum->setObjectName(QString::fromUtf8("lineEditServerNum"));

        horizontalLayout_3->addWidget(lineEditServerNum);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButtonConnect = new QPushButton(groupBox);
        pushButtonConnect->setObjectName(QString::fromUtf8("pushButtonConnect"));

        horizontalLayout_4->addWidget(pushButtonConnect);

        pushButtonDisconnect = new QPushButton(groupBox);
        pushButtonDisconnect->setObjectName(QString::fromUtf8("pushButtonDisconnect"));

        horizontalLayout_4->addWidget(pushButtonDisconnect);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButtonTest = new QPushButton(groupBox);
        pushButtonTest->setObjectName(QString::fromUtf8("pushButtonTest"));

        horizontalLayout_5->addWidget(pushButtonTest);

        pushButtonSend = new QPushButton(groupBox);
        pushButtonSend->setObjectName(QString::fromUtf8("pushButtonSend"));

        horizontalLayout_5->addWidget(pushButtonSend);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_3->addWidget(groupBox);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Widget", "Local Information:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "Current Temp:", 0, QApplication::UnicodeUTF8));
        lineEditLocalTempValue->setText(QApplication::translate("Widget", "22.29", 0, QApplication::UnicodeUTF8));
        pushButtonGetTemp->setText(QApplication::translate("Widget", "Read", 0, QApplication::UnicodeUTF8));
        pushButtonClear->setText(QApplication::translate("Widget", "Clear", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Widget", "Service Configure:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "Service IP:", 0, QApplication::UnicodeUTF8));
        lineEditServerIp->setText(QApplication::translate("Widget", "67.218.129.50", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Widget", "Service PORT:", 0, QApplication::UnicodeUTF8));
        lineEditServerPort->setText(QApplication::translate("Widget", "8543", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Widget", "Service NUM:", 0, QApplication::UnicodeUTF8));
        lineEditServerNum->setText(QApplication::translate("Widget", "4", 0, QApplication::UnicodeUTF8));
        pushButtonConnect->setText(QApplication::translate("Widget", "Connect", 0, QApplication::UnicodeUTF8));
        pushButtonDisconnect->setText(QApplication::translate("Widget", "Disconnect", 0, QApplication::UnicodeUTF8));
        pushButtonTest->setText(QApplication::translate("Widget", "Test", 0, QApplication::UnicodeUTF8));
        pushButtonSend->setText(QApplication::translate("Widget", "Send", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
