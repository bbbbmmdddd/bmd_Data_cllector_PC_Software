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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Choose
{
public:
    QWidget *widget;
    QPushButton *pushButton_DataTest;

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
        widget->setGeometry(QRect(-10, -10, 1511, 1041));
        widget->setMinimumSize(QSize(1511, 1041));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	\n"
"	border-image: url(:/Welcom/153_Black_Sea.png);\n"
"}"));
        pushButton_DataTest = new QPushButton(widget);
        pushButton_DataTest->setObjectName("pushButton_DataTest");
        pushButton_DataTest->setGeometry(QRect(520, 330, 421, 331));

        retranslateUi(Choose);
        QObject::connect(pushButton_DataTest, SIGNAL(clicked()), Choose, SLOT(pushButton_DataTest()));

        QMetaObject::connectSlotsByName(Choose);
    } // setupUi

    void retranslateUi(QWidget *Choose)
    {
        Choose->setWindowTitle(QCoreApplication::translate("Choose", "Choose", nullptr));
        pushButton_DataTest->setText(QCoreApplication::translate("Choose", "\346\225\260\346\215\256\345\244\204\347\220\206\346\265\213\350\257\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Choose: public Ui_Choose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSE_H
