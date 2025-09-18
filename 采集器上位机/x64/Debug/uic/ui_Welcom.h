/********************************************************************************
** Form generated from reading UI file 'Welcom.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOM_H
#define UI_WELCOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomClass
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *WelcomClass)
    {
        if (WelcomClass->objectName().isEmpty())
            WelcomClass->setObjectName("WelcomClass");
        WelcomClass->resize(886, 610);
        WelcomClass->setMinimumSize(QSize(886, 610));
        WelcomClass->setMaximumSize(QSize(886, 610));
        QFont font;
        font.setFamilies({QString::fromUtf8("Share-TechMono")});
        font.setPointSize(26);
        WelcomClass->setFont(font);
        WelcomClass->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(WelcomClass);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(WelcomClass);
        widget->setObjectName("widget");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font1.setPointSize(9);
        widget->setFont(font1);
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	\n"
"	border-image: url(:/Welcom/153_Black_Sea.png);\n"
"}"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(170, 160, 170, 155);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton\n"
"{\n"
"	border-image: url(:/Welcom/rj45.png);\n"
"}\n"
"\n"
"QPushButton#pushButton:hove\n"
"{\n"
"	border-image: url(:/Welcom/rj45(1).png);\n"
"}"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(0, 0));
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);


        horizontalLayout_2->addWidget(widget);


        retranslateUi(WelcomClass);

        QMetaObject::connectSlotsByName(WelcomClass);
    } // setupUi

    void retranslateUi(QWidget *WelcomClass)
    {
        WelcomClass->setWindowTitle(QCoreApplication::translate("WelcomClass", "Welcom", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label->setText(QCoreApplication::translate("WelcomClass", "RJ45", nullptr));
        label_2->setText(QCoreApplication::translate("WelcomClass", "Serial", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomClass: public Ui_WelcomClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOM_H
