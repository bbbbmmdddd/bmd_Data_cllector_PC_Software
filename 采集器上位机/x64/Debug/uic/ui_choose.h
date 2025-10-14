/********************************************************************************
** Form generated from reading UI file 'choose.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSE_H
#define UI_CHOOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Choose
{
public:
    QWidget *widget;

    void setupUi(QWidget *Choose)
    {
        if (Choose->objectName().isEmpty())
            Choose->setObjectName("Choose");
        Choose->resize(1470, 1027);
        Choose->setMinimumSize(QSize(1470, 1027));
        Choose->setMaximumSize(QSize(1470, 1027));
        Choose->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(Choose);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-40, -10, 1511, 1041));
        widget->setMinimumSize(QSize(1511, 1041));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	\n"
"	border-image: url(:/Welcom/153_Black_Sea.png);\n"
"}"));

        retranslateUi(Choose);

        QMetaObject::connectSlotsByName(Choose);
    } // setupUi

    void retranslateUi(QWidget *Choose)
    {
        Choose->setWindowTitle(QCoreApplication::translate("Choose", "Choose", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Choose: public Ui_Choose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSE_H
