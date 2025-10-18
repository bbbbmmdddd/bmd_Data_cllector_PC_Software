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
#include <QtWidgets/QComboBox>
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
    QComboBox *comboBox;
    QLabel *label_pictures;
    QPushButton *pushButton_Enter;

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
        font1.setFamilies({QString::fromUtf8("Share-TechMono")});
        font1.setPointSize(14);
        widget->setFont(font1);
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	\n"
"	border-image: url(:/Welcom/153_Black_Sea.png);\n"
"}"));
        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(200, 40, 451, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Share-TechMono")});
        font2.setPointSize(16);
        comboBox->setFont(font2);
        label_pictures = new QLabel(widget);
        label_pictures->setObjectName("label_pictures");
        label_pictures->setGeometry(QRect(200, 100, 451, 431));
        label_pictures->setStyleSheet(QString::fromUtf8("border-image: url(:/Welcom/Easy_data_cllected_card.png);"));
        label_pictures->setScaledContents(true);
        pushButton_Enter = new QPushButton(widget);
        pushButton_Enter->setObjectName("pushButton_Enter");
        pushButton_Enter->setGeometry(QRect(200, 540, 451, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Share-TechMono")});
        font3.setPointSize(25);
        pushButton_Enter->setFont(font3);

        horizontalLayout_2->addWidget(widget);


        retranslateUi(WelcomClass);
        QObject::connect(comboBox, SIGNAL(currentIndexChanged(int)), WelcomClass, SLOT(comboBox_change()));
        QObject::connect(pushButton_Enter, SIGNAL(clicked()), WelcomClass, SLOT(pushButton_Enter()));

        QMetaObject::connectSlotsByName(WelcomClass);
    } // setupUi

    void retranslateUi(QWidget *WelcomClass)
    {
        WelcomClass->setWindowTitle(QCoreApplication::translate("WelcomClass", "Welcom", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("WelcomClass", "Easy_Data_Collector", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("WelcomClass", "Modularization_Data_Collector", nullptr));

        label_pictures->setText(QString());
        pushButton_Enter->setText(QCoreApplication::translate("WelcomClass", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomClass: public Ui_WelcomClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOM_H
