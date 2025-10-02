/********************************************************************************
** Form generated from reading UI file 'Choose.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSE_H
#define UI_CHOOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomClass
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QComboBox *comboBox_choose_data_collected;
    QPushButton *pushButton;

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
        comboBox_choose_data_collected = new QComboBox(widget);
        comboBox_choose_data_collected->addItem(QString());
        comboBox_choose_data_collected->addItem(QString());
        comboBox_choose_data_collected->setObjectName("comboBox_choose_data_collected");
        comboBox_choose_data_collected->setGeometry(QRect(210, 10, 431, 51));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 100, 561, 491));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Welcom/Easy_data_cllected_card.png);"));

        horizontalLayout_2->addWidget(widget);


        retranslateUi(WelcomClass);

        QMetaObject::connectSlotsByName(WelcomClass);
    } // setupUi

    void retranslateUi(QWidget *WelcomClass)
    {
        WelcomClass->setWindowTitle(QCoreApplication::translate("WelcomClass", "Welcom", nullptr));
        comboBox_choose_data_collected->setItemText(0, QCoreApplication::translate("WelcomClass", "Easy_data_collexted", nullptr));
        comboBox_choose_data_collected->setItemText(1, QCoreApplication::translate("WelcomClass", "Modularization_data_collect", nullptr));

        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WelcomClass: public Ui_WelcomClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSE_H
