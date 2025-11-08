/********************************************************************************
** Form generated from reading UI file 'choose.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSE_H
#define UI_CHOOSE_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Choose
{
public:
    QWidget *widget;
    QGroupBox *groupBox_serialsend;
    QTextEdit *textEdit_serialsend;
    QGroupBox *groupBox_serialreceive;
    QListWidget *listWidget_serialreceive;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_remember;
    QPushButton *pushButton_pushSetup;
    QLabel *label_m;
    QLineEdit *lineEdit_m;
    QGroupBox *groupBox_serial;
    QWidget *formLayoutWidget_2;
    QGridLayout *gridLayout_3;
    QLabel *label_serialport_2;
    QComboBox *comboBox_serialport_2;
    QLabel *label_baudrate_2;
    QComboBox *comboBox_baudrate_2;
    QLabel *label_databits_2;
    QComboBox *comboBox_databits_2;
    QLabel *label_stopbits_2;
    QComboBox *comboBox_stopbits_2;
    QLabel *label_parity_2;
    QComboBox *comboBox_parity_2;
    QPushButton *pushButton_serialRest_2;
    QPushButton *pushButton_openport_2;
    QPushButton *pushButton_closeport_2;
    QLabel *label_serialConnection_2;
    QChartView *chartView;
    QPushButton *pushButton_DataTest;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_clearserialreceive;
    QPushButton *pushButton_serialsend;

    void setupUi(QWidget *Choose)
    {
        if (Choose->objectName().isEmpty())
            Choose->setObjectName("Choose");
        Choose->resize(1821, 1077);
        Choose->setMinimumSize(QSize(1821, 1077));
        Choose->setMaximumSize(QSize(1821, 1077));
        Choose->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(Choose);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-10, 0, 1851, 1101));
        widget->setMinimumSize(QSize(1511, 1041));
        QFont font;
        font.setBold(true);
        widget->setFont(font);
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	\n"
"	border-image: url(:/Welcom/153_Black_Sea.png);\n"
"}"));
        groupBox_serialsend = new QGroupBox(widget);
        groupBox_serialsend->setObjectName("groupBox_serialsend");
        groupBox_serialsend->setGeometry(QRect(370, 960, 1261, 101));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Maple Mono NF CN")});
        font1.setPointSize(16);
        font1.setBold(false);
        groupBox_serialsend->setFont(font1);
        groupBox_serialsend->setStyleSheet(QString::fromUtf8(""));
        textEdit_serialsend = new QTextEdit(groupBox_serialsend);
        textEdit_serialsend->setObjectName("textEdit_serialsend");
        textEdit_serialsend->setGeometry(QRect(10, 30, 1241, 61));
        textEdit_serialsend->setStyleSheet(QString::fromUtf8("background-color:white;"));
        groupBox_serialreceive = new QGroupBox(widget);
        groupBox_serialreceive->setObjectName("groupBox_serialreceive");
        groupBox_serialreceive->setGeometry(QRect(20, 620, 251, 441));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Share-TechMono")});
        font2.setPointSize(16);
        font2.setBold(false);
        groupBox_serialreceive->setFont(font2);
        groupBox_serialreceive->setStyleSheet(QString::fromUtf8(""));
        listWidget_serialreceive = new QListWidget(groupBox_serialreceive);
        listWidget_serialreceive->setObjectName("listWidget_serialreceive");
        listWidget_serialreceive->setGeometry(QRect(10, 30, 231, 401));
        listWidget_serialreceive->setStyleSheet(QString::fromUtf8("background-color:white;\n"
""));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 360, 251, 261));
        groupBox->setFont(font1);
        groupBox->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget_2 = new QWidget(groupBox);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(80, 170, 160, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_remember = new QLabel(verticalLayoutWidget_2);
        label_remember->setObjectName("label_remember");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Maple Mono NF CN")});
        font3.setPointSize(18);
        font3.setBold(false);
        font3.setKerning(false);
        label_remember->setFont(font3);
        label_remember->setStyleSheet(QString::fromUtf8("color:green;"));
        label_remember->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_remember);

        pushButton_pushSetup = new QPushButton(verticalLayoutWidget_2);
        pushButton_pushSetup->setObjectName("pushButton_pushSetup");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Maple Mono NF CN")});
        font4.setPointSize(12);
        font4.setBold(false);
        pushButton_pushSetup->setFont(font4);
        pushButton_pushSetup->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));

        verticalLayout_2->addWidget(pushButton_pushSetup);

        label_m = new QLabel(groupBox);
        label_m->setObjectName("label_m");
        label_m->setGeometry(QRect(10, 30, 151, 61));
        label_m->setFont(font1);
        label_m->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));
        lineEdit_m = new QLineEdit(groupBox);
        lineEdit_m->setObjectName("lineEdit_m");
        lineEdit_m->setGeometry(QRect(10, 80, 231, 71));
        lineEdit_m->setMinimumSize(QSize(0, 61));
        lineEdit_m->setFont(font1);
        lineEdit_m->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));
        groupBox_serial = new QGroupBox(widget);
        groupBox_serial->setObjectName("groupBox_serial");
        groupBox_serial->setGeometry(QRect(20, 10, 251, 351));
        groupBox_serial->setFont(font1);
        groupBox_serial->setAutoFillBackground(false);
        groupBox_serial->setStyleSheet(QString::fromUtf8(""));
        formLayoutWidget_2 = new QWidget(groupBox_serial);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(10, 30, 231, 301));
        gridLayout_3 = new QGridLayout(formLayoutWidget_2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_serialport_2 = new QLabel(formLayoutWidget_2);
        label_serialport_2->setObjectName("label_serialport_2");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Maple Mono NF CN")});
        font5.setPointSize(15);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setUnderline(false);
        font5.setStrikeOut(false);
        label_serialport_2->setFont(font5);
        label_serialport_2->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_3->addWidget(label_serialport_2, 0, 0, 1, 1);

        comboBox_serialport_2 = new QComboBox(formLayoutWidget_2);
        comboBox_serialport_2->setObjectName("comboBox_serialport_2");
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Maple Mono NF CN")});
        font6.setBold(true);
        comboBox_serialport_2->setFont(font6);
        comboBox_serialport_2->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));

        gridLayout_3->addWidget(comboBox_serialport_2, 0, 1, 1, 1);

        label_baudrate_2 = new QLabel(formLayoutWidget_2);
        label_baudrate_2->setObjectName("label_baudrate_2");
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Maple Mono NF CN")});
        font7.setPointSize(15);
        font7.setBold(true);
        label_baudrate_2->setFont(font7);
        label_baudrate_2->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_3->addWidget(label_baudrate_2, 1, 0, 1, 1);

        comboBox_baudrate_2 = new QComboBox(formLayoutWidget_2);
        comboBox_baudrate_2->addItem(QString());
        comboBox_baudrate_2->addItem(QString());
        comboBox_baudrate_2->addItem(QString());
        comboBox_baudrate_2->addItem(QString());
        comboBox_baudrate_2->addItem(QString());
        comboBox_baudrate_2->addItem(QString());
        comboBox_baudrate_2->addItem(QString());
        comboBox_baudrate_2->setObjectName("comboBox_baudrate_2");
        comboBox_baudrate_2->setFont(font6);
        comboBox_baudrate_2->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));

        gridLayout_3->addWidget(comboBox_baudrate_2, 1, 1, 1, 1);

        label_databits_2 = new QLabel(formLayoutWidget_2);
        label_databits_2->setObjectName("label_databits_2");
        label_databits_2->setFont(font7);
        label_databits_2->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_3->addWidget(label_databits_2, 2, 0, 1, 1);

        comboBox_databits_2 = new QComboBox(formLayoutWidget_2);
        comboBox_databits_2->addItem(QString());
        comboBox_databits_2->addItem(QString());
        comboBox_databits_2->addItem(QString());
        comboBox_databits_2->addItem(QString());
        comboBox_databits_2->setObjectName("comboBox_databits_2");
        comboBox_databits_2->setFont(font6);
        comboBox_databits_2->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));

        gridLayout_3->addWidget(comboBox_databits_2, 2, 1, 1, 1);

        label_stopbits_2 = new QLabel(formLayoutWidget_2);
        label_stopbits_2->setObjectName("label_stopbits_2");
        label_stopbits_2->setFont(font7);
        label_stopbits_2->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_3->addWidget(label_stopbits_2, 3, 0, 1, 1);

        comboBox_stopbits_2 = new QComboBox(formLayoutWidget_2);
        comboBox_stopbits_2->addItem(QString());
        comboBox_stopbits_2->addItem(QString());
        comboBox_stopbits_2->addItem(QString());
        comboBox_stopbits_2->setObjectName("comboBox_stopbits_2");
        comboBox_stopbits_2->setFont(font6);
        comboBox_stopbits_2->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));

        gridLayout_3->addWidget(comboBox_stopbits_2, 3, 1, 1, 1);

        label_parity_2 = new QLabel(formLayoutWidget_2);
        label_parity_2->setObjectName("label_parity_2");
        label_parity_2->setFont(font7);
        label_parity_2->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_3->addWidget(label_parity_2, 4, 0, 1, 1);

        comboBox_parity_2 = new QComboBox(formLayoutWidget_2);
        comboBox_parity_2->addItem(QString());
        comboBox_parity_2->addItem(QString());
        comboBox_parity_2->addItem(QString());
        comboBox_parity_2->addItem(QString());
        comboBox_parity_2->addItem(QString());
        comboBox_parity_2->setObjectName("comboBox_parity_2");
        comboBox_parity_2->setFont(font6);
        comboBox_parity_2->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));

        gridLayout_3->addWidget(comboBox_parity_2, 4, 1, 1, 1);

        pushButton_serialRest_2 = new QPushButton(formLayoutWidget_2);
        pushButton_serialRest_2->setObjectName("pushButton_serialRest_2");
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Maple Mono NF CN")});
        font8.setPointSize(11);
        font8.setBold(true);
        pushButton_serialRest_2->setFont(font8);
        pushButton_serialRest_2->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));

        gridLayout_3->addWidget(pushButton_serialRest_2, 5, 0, 1, 1);

        pushButton_openport_2 = new QPushButton(formLayoutWidget_2);
        pushButton_openport_2->setObjectName("pushButton_openport_2");
        pushButton_openport_2->setFont(font8);
        pushButton_openport_2->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));

        gridLayout_3->addWidget(pushButton_openport_2, 5, 1, 1, 1);

        pushButton_closeport_2 = new QPushButton(formLayoutWidget_2);
        pushButton_closeport_2->setObjectName("pushButton_closeport_2");
        pushButton_closeport_2->setFont(font8);
        pushButton_closeport_2->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));

        gridLayout_3->addWidget(pushButton_closeport_2, 6, 1, 1, 1);

        label_serialConnection_2 = new QLabel(formLayoutWidget_2);
        label_serialConnection_2->setObjectName("label_serialConnection_2");
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Maple Mono NF CN")});
        font9.setPointSize(16);
        font9.setBold(true);
        label_serialConnection_2->setFont(font9);
        label_serialConnection_2->setStyleSheet(QString::fromUtf8("color:red;"));
        label_serialConnection_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_serialConnection_2, 6, 0, 1, 1);

        chartView = new QChartView(widget);
        chartView->setObjectName("chartView");
        chartView->setGeometry(QRect(280, 10, 1541, 941));
        chartView->setFont(font6);
        chartView->setStyleSheet(QString::fromUtf8("QWidget#chartView\n"
"{\n"
"	background-color:white;\n"
"}"));
        pushButton_DataTest = new QPushButton(widget);
        pushButton_DataTest->setObjectName("pushButton_DataTest");
        pushButton_DataTest->setGeometry(QRect(1640, 970, 181, 91));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Maple Mono NF CN")});
        font10.setPointSize(14);
        font10.setBold(false);
        pushButton_DataTest->setFont(font10);
        pushButton_DataTest->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(280, 960, 85, 100));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_clearserialreceive = new QPushButton(verticalLayoutWidget);
        pushButton_clearserialreceive->setObjectName("pushButton_clearserialreceive");
        pushButton_clearserialreceive->setFont(font1);
        pushButton_clearserialreceive->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));

        verticalLayout->addWidget(pushButton_clearserialreceive);

        pushButton_serialsend = new QPushButton(verticalLayoutWidget);
        pushButton_serialsend->setObjectName("pushButton_serialsend");
        pushButton_serialsend->setFont(font1);
        pushButton_serialsend->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));

        verticalLayout->addWidget(pushButton_serialsend);


        retranslateUi(Choose);
        QObject::connect(pushButton_DataTest, SIGNAL(clicked()), Choose, SLOT(pushButton_DataTest()));

        QMetaObject::connectSlotsByName(Choose);
    } // setupUi

    void retranslateUi(QWidget *Choose)
    {
        Choose->setWindowTitle(QCoreApplication::translate("Choose", "Choose", nullptr));
        groupBox_serialsend->setTitle(QCoreApplication::translate("Choose", "\344\270\262\345\217\243\345\217\221\351\200\201", nullptr));
        groupBox_serialreceive->setTitle(QCoreApplication::translate("Choose", "\344\270\262\345\217\243\346\216\245\346\224\266", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Choose", "\351\207\207\351\233\206\350\256\276\347\275\256", nullptr));
        label_remember->setText(QCoreApplication::translate("Choose", "\350\256\276\347\275\256\345\267\262\344\270\212\344\274\240", nullptr));
        pushButton_pushSetup->setText(QCoreApplication::translate("Choose", "\344\270\212\344\274\240\350\256\276\347\275\256", nullptr));
        label_m->setText(QCoreApplication::translate("Choose", "\344\277\235\345\255\230\346\226\207\344\273\266\345\220\215:", nullptr));
        lineEdit_m->setText(QCoreApplication::translate("Choose", "Thrust", nullptr));
        groupBox_serial->setTitle(QCoreApplication::translate("Choose", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
        label_serialport_2->setText(QCoreApplication::translate("Choose", "\344\270\262\345\217\243\345\217\267\357\274\232", nullptr));
        label_baudrate_2->setText(QCoreApplication::translate("Choose", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        comboBox_baudrate_2->setItemText(0, QCoreApplication::translate("Choose", "1152000", nullptr));
        comboBox_baudrate_2->setItemText(1, QCoreApplication::translate("Choose", "115200", nullptr));
        comboBox_baudrate_2->setItemText(2, QCoreApplication::translate("Choose", "57600", nullptr));
        comboBox_baudrate_2->setItemText(3, QCoreApplication::translate("Choose", "38400", nullptr));
        comboBox_baudrate_2->setItemText(4, QCoreApplication::translate("Choose", "19200", nullptr));
        comboBox_baudrate_2->setItemText(5, QCoreApplication::translate("Choose", "9600", nullptr));
        comboBox_baudrate_2->setItemText(6, QCoreApplication::translate("Choose", "2400", nullptr));

        label_databits_2->setText(QCoreApplication::translate("Choose", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        comboBox_databits_2->setItemText(0, QCoreApplication::translate("Choose", "8", nullptr));
        comboBox_databits_2->setItemText(1, QCoreApplication::translate("Choose", "7", nullptr));
        comboBox_databits_2->setItemText(2, QCoreApplication::translate("Choose", "6", nullptr));
        comboBox_databits_2->setItemText(3, QCoreApplication::translate("Choose", "5", nullptr));

        label_stopbits_2->setText(QCoreApplication::translate("Choose", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        comboBox_stopbits_2->setItemText(0, QCoreApplication::translate("Choose", "1", nullptr));
        comboBox_stopbits_2->setItemText(1, QCoreApplication::translate("Choose", "1.5", nullptr));
        comboBox_stopbits_2->setItemText(2, QCoreApplication::translate("Choose", "2", nullptr));

        label_parity_2->setText(QCoreApplication::translate("Choose", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        comboBox_parity_2->setItemText(0, QCoreApplication::translate("Choose", "NONE", nullptr));
        comboBox_parity_2->setItemText(1, QCoreApplication::translate("Choose", "ODD", nullptr));
        comboBox_parity_2->setItemText(2, QCoreApplication::translate("Choose", "EVEN", nullptr));
        comboBox_parity_2->setItemText(3, QCoreApplication::translate("Choose", "MARK", nullptr));
        comboBox_parity_2->setItemText(4, QCoreApplication::translate("Choose", "SPACE", nullptr));

        pushButton_serialRest_2->setText(QCoreApplication::translate("Choose", "\345\210\267\346\226\260\344\270\262\345\217\243\345\217\267", nullptr));
        pushButton_openport_2->setText(QCoreApplication::translate("Choose", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        pushButton_closeport_2->setText(QCoreApplication::translate("Choose", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        label_serialConnection_2->setText(QCoreApplication::translate("Choose", "\346\234\252\350\277\236\346\216\245", nullptr));
        pushButton_DataTest->setText(QCoreApplication::translate("Choose", "\346\225\260\346\215\256\345\244\204\347\220\206\346\265\213\350\257\225", nullptr));
        pushButton_clearserialreceive->setText(QCoreApplication::translate("Choose", "\342\206\220\346\270\205\347\251\272", nullptr));
        pushButton_serialsend->setText(QCoreApplication::translate("Choose", "\345\217\221\351\200\201\342\206\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Choose: public Ui_Choose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSE_H
