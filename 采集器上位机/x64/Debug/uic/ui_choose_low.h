/********************************************************************************
** Form generated from reading UI file 'choose_low.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSE_LOW_H
#define UI_CHOOSE_LOW_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Choose_Low
{
public:
    QWidget *widget;
    QGroupBox *groupBox_serialreceive_2;
    QTextEdit *textEdit_serialreceive_2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_rxNumber_2;
    QLabel *label_number_2;
    QGroupBox *groupBox_serial_2;
    QWidget *formLayoutWidget_3;
    QGridLayout *gridLayout_4;
    QLabel *label_serialport_3;
    QComboBox *comboBox_serialport_2;
    QLabel *label_baudrate_3;
    QComboBox *comboBox_baudrate_2;
    QLabel *label_databits_3;
    QComboBox *comboBox_databits_2;
    QLabel *label_stopbits_3;
    QComboBox *comboBox_stopbits_2;
    QLabel *label_parity_3;
    QComboBox *comboBox_parity_2;
    QPushButton *pushButton_serialRest_2;
    QPushButton *pushButton_openport_2;
    QPushButton *pushButton_closeport_2;
    QLabel *label_serialConnection_2;
    QLabel *label_date_2;
    QPushButton *pushButton_clearserialreceive_2;
    QPushButton *pushButton_DataTest_2;
    QLabel *label_date_3;
    QGroupBox *groupBox_serialreceive_3;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_rxNumber_3;
    QLabel *label_number_3;
    QChartView *chartView_2;
    QGraphicsView *graphicsView_2;
    QCheckBox *checkBox_2;

    void setupUi(QWidget *Choose_Low)
    {
        if (Choose_Low->objectName().isEmpty())
            Choose_Low->setObjectName("Choose_Low");
        Choose_Low->resize(1821, 1077);
        Choose_Low->setMinimumSize(QSize(1821, 1077));
        Choose_Low->setMaximumSize(QSize(1821, 1077));
        Choose_Low->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(Choose_Low);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-10, 0, 1851, 1101));
        widget->setMinimumSize(QSize(1511, 1041));
        QFont font;
        font.setBold(true);
        widget->setFont(font);
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	border-image: url(:/Welcom/screen.png);\n"
"}"));
        groupBox_serialreceive_2 = new QGroupBox(widget);
        groupBox_serialreceive_2->setObjectName("groupBox_serialreceive_2");
        groupBox_serialreceive_2->setGeometry(QRect(280, 10, 1531, 511));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Maple Mono NF CN")});
        font1.setPointSize(16);
        font1.setBold(false);
        groupBox_serialreceive_2->setFont(font1);
        groupBox_serialreceive_2->setStyleSheet(QString::fromUtf8(""));
        textEdit_serialreceive_2 = new QTextEdit(groupBox_serialreceive_2);
        textEdit_serialreceive_2->setObjectName("textEdit_serialreceive_2");
        textEdit_serialreceive_2->setGeometry(QRect(10, 30, 1511, 451));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Maple Mono NF CN")});
        font2.setPointSize(18);
        textEdit_serialreceive_2->setFont(font2);
        layoutWidget_3 = new QWidget(groupBox_serialreceive_2);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(10, 480, 231, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_rxNumber_2 = new QLabel(layoutWidget_3);
        label_rxNumber_2->setObjectName("label_rxNumber_2");
        label_rxNumber_2->setMaximumSize(QSize(35, 16777215));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Maple Mono NF CN")});
        font3.setPointSize(11);
        font3.setBold(true);
        label_rxNumber_2->setFont(font3);
        label_rxNumber_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_rxNumber_2);

        label_number_2 = new QLabel(layoutWidget_3);
        label_number_2->setObjectName("label_number_2");
        label_number_2->setFont(font3);
        label_number_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_3->addWidget(label_number_2);

        groupBox_serial_2 = new QGroupBox(widget);
        groupBox_serial_2->setObjectName("groupBox_serial_2");
        groupBox_serial_2->setGeometry(QRect(20, 40, 251, 341));
        groupBox_serial_2->setFont(font1);
        groupBox_serial_2->setAutoFillBackground(false);
        groupBox_serial_2->setStyleSheet(QString::fromUtf8(""));
        formLayoutWidget_3 = new QWidget(groupBox_serial_2);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(10, 30, 231, 301));
        gridLayout_4 = new QGridLayout(formLayoutWidget_3);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_serialport_3 = new QLabel(formLayoutWidget_3);
        label_serialport_3->setObjectName("label_serialport_3");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Maple Mono NF CN")});
        font4.setPointSize(15);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        label_serialport_3->setFont(font4);
        label_serialport_3->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_4->addWidget(label_serialport_3, 0, 0, 1, 1);

        comboBox_serialport_2 = new QComboBox(formLayoutWidget_3);
        comboBox_serialport_2->setObjectName("comboBox_serialport_2");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Maple Mono NF CN")});
        font5.setBold(true);
        comboBox_serialport_2->setFont(font5);
        comboBox_serialport_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(comboBox_serialport_2, 0, 1, 1, 1);

        label_baudrate_3 = new QLabel(formLayoutWidget_3);
        label_baudrate_3->setObjectName("label_baudrate_3");
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Maple Mono NF CN")});
        font6.setPointSize(15);
        font6.setBold(true);
        label_baudrate_3->setFont(font6);
        label_baudrate_3->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_4->addWidget(label_baudrate_3, 1, 0, 1, 1);

        comboBox_baudrate_2 = new QComboBox(formLayoutWidget_3);
        comboBox_baudrate_2->addItem(QString());
        comboBox_baudrate_2->addItem(QString());
        comboBox_baudrate_2->addItem(QString());
        comboBox_baudrate_2->addItem(QString());
        comboBox_baudrate_2->addItem(QString());
        comboBox_baudrate_2->addItem(QString());
        comboBox_baudrate_2->setObjectName("comboBox_baudrate_2");
        comboBox_baudrate_2->setFont(font5);
        comboBox_baudrate_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(comboBox_baudrate_2, 1, 1, 1, 1);

        label_databits_3 = new QLabel(formLayoutWidget_3);
        label_databits_3->setObjectName("label_databits_3");
        label_databits_3->setFont(font6);
        label_databits_3->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_4->addWidget(label_databits_3, 2, 0, 1, 1);

        comboBox_databits_2 = new QComboBox(formLayoutWidget_3);
        comboBox_databits_2->addItem(QString());
        comboBox_databits_2->addItem(QString());
        comboBox_databits_2->addItem(QString());
        comboBox_databits_2->addItem(QString());
        comboBox_databits_2->setObjectName("comboBox_databits_2");
        comboBox_databits_2->setFont(font5);
        comboBox_databits_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(comboBox_databits_2, 2, 1, 1, 1);

        label_stopbits_3 = new QLabel(formLayoutWidget_3);
        label_stopbits_3->setObjectName("label_stopbits_3");
        label_stopbits_3->setFont(font6);
        label_stopbits_3->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_4->addWidget(label_stopbits_3, 3, 0, 1, 1);

        comboBox_stopbits_2 = new QComboBox(formLayoutWidget_3);
        comboBox_stopbits_2->addItem(QString());
        comboBox_stopbits_2->addItem(QString());
        comboBox_stopbits_2->addItem(QString());
        comboBox_stopbits_2->setObjectName("comboBox_stopbits_2");
        comboBox_stopbits_2->setFont(font5);
        comboBox_stopbits_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(comboBox_stopbits_2, 3, 1, 1, 1);

        label_parity_3 = new QLabel(formLayoutWidget_3);
        label_parity_3->setObjectName("label_parity_3");
        label_parity_3->setFont(font6);
        label_parity_3->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_4->addWidget(label_parity_3, 4, 0, 1, 1);

        comboBox_parity_2 = new QComboBox(formLayoutWidget_3);
        comboBox_parity_2->addItem(QString());
        comboBox_parity_2->addItem(QString());
        comboBox_parity_2->addItem(QString());
        comboBox_parity_2->addItem(QString());
        comboBox_parity_2->addItem(QString());
        comboBox_parity_2->setObjectName("comboBox_parity_2");
        comboBox_parity_2->setFont(font5);
        comboBox_parity_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(comboBox_parity_2, 4, 1, 1, 1);

        pushButton_serialRest_2 = new QPushButton(formLayoutWidget_3);
        pushButton_serialRest_2->setObjectName("pushButton_serialRest_2");
        pushButton_serialRest_2->setFont(font3);
        pushButton_serialRest_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(pushButton_serialRest_2, 5, 0, 1, 1);

        pushButton_openport_2 = new QPushButton(formLayoutWidget_3);
        pushButton_openport_2->setObjectName("pushButton_openport_2");
        pushButton_openport_2->setFont(font3);
        pushButton_openport_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(pushButton_openport_2, 5, 1, 1, 1);

        pushButton_closeport_2 = new QPushButton(formLayoutWidget_3);
        pushButton_closeport_2->setObjectName("pushButton_closeport_2");
        pushButton_closeport_2->setFont(font3);
        pushButton_closeport_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(pushButton_closeport_2, 6, 1, 1, 1);

        label_serialConnection_2 = new QLabel(formLayoutWidget_3);
        label_serialConnection_2->setObjectName("label_serialConnection_2");
        label_serialConnection_2->setFont(font1);
        label_serialConnection_2->setStyleSheet(QString::fromUtf8("color:red;"));
        label_serialConnection_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_serialConnection_2, 6, 0, 1, 1);

        label_date_2 = new QLabel(widget);
        label_date_2->setObjectName("label_date_2");
        label_date_2->setGeometry(QRect(10, 10, 271, 31));
        label_date_2->setFont(font3);
        label_date_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_clearserialreceive_2 = new QPushButton(widget);
        pushButton_clearserialreceive_2->setObjectName("pushButton_clearserialreceive_2");
        pushButton_clearserialreceive_2->setGeometry(QRect(20, 400, 251, 131));
        pushButton_clearserialreceive_2->setFont(font1);
        pushButton_clearserialreceive_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_DataTest_2 = new QPushButton(widget);
        pushButton_DataTest_2->setObjectName("pushButton_DataTest_2");
        pushButton_DataTest_2->setGeometry(QRect(20, 540, 251, 131));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_DataTest_2->sizePolicy().hasHeightForWidth());
        pushButton_DataTest_2->setSizePolicy(sizePolicy);
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Maple Mono NF CN")});
        font7.setPointSize(14);
        font7.setBold(false);
        pushButton_DataTest_2->setFont(font7);
        pushButton_DataTest_2->setStyleSheet(QString::fromUtf8(""));
        label_date_3 = new QLabel(widget);
        label_date_3->setObjectName("label_date_3");
        label_date_3->setGeometry(QRect(0, 1040, 281, 41));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Share-TechMono")});
        font8.setPointSize(15);
        font8.setBold(false);
        label_date_3->setFont(font8);
        label_date_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        groupBox_serialreceive_3 = new QGroupBox(widget);
        groupBox_serialreceive_3->setObjectName("groupBox_serialreceive_3");
        groupBox_serialreceive_3->setGeometry(QRect(280, 520, 1531, 551));
        groupBox_serialreceive_3->setFont(font1);
        groupBox_serialreceive_3->setStyleSheet(QString::fromUtf8(""));
        layoutWidget_5 = new QWidget(groupBox_serialreceive_3);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(10, 1010, 231, 31));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_rxNumber_3 = new QLabel(layoutWidget_5);
        label_rxNumber_3->setObjectName("label_rxNumber_3");
        label_rxNumber_3->setMaximumSize(QSize(35, 16777215));
        label_rxNumber_3->setFont(font3);
        label_rxNumber_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_5->addWidget(label_rxNumber_3);

        label_number_3 = new QLabel(layoutWidget_5);
        label_number_3->setObjectName("label_number_3");
        label_number_3->setFont(font3);
        label_number_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_5->addWidget(label_number_3);

        chartView_2 = new QChartView(groupBox_serialreceive_3);
        chartView_2->setObjectName("chartView_2");
        chartView_2->setGeometry(QRect(10, 31, 1511, 511));
        chartView_2->setFont(font5);
        chartView_2->setStyleSheet(QString::fromUtf8("QWidget#chartView_2\n"
"{\n"
"	background-color:rgb(45,45,45);\n"
"}"));
        graphicsView_2 = new QGraphicsView(chartView_2);
        graphicsView_2->setObjectName("graphicsView_2");
        graphicsView_2->setGeometry(QRect(1350, 0, 171, 161));
        graphicsView_2->setStyleSheet(QString::fromUtf8("border-image: url(:/Welcom/hair.png);"));
        checkBox_2 = new QCheckBox(chartView_2);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(6, 488, 83, 19));
        checkBox_2->setChecked(false);
        checkBox_2->setAutoRepeat(false);
        checkBox_2->setAutoExclusive(false);
        checkBox_2->setTristate(false);

        retranslateUi(Choose_Low);
        QObject::connect(checkBox_2, SIGNAL(clicked()), Choose_Low, SLOT(area_on_off()));
        QObject::connect(pushButton_DataTest_2, SIGNAL(clicked()), Choose_Low, SLOT(pushButton_DataTest()));
        QObject::connect(pushButton_clearserialreceive_2, SIGNAL(clicked()), Choose_Low, SLOT(clearSerialReceive()));
        QObject::connect(pushButton_serialRest_2, SIGNAL(clicked()), Choose_Low, SLOT(serialRest()));
        QObject::connect(pushButton_openport_2, SIGNAL(clicked()), Choose_Low, SLOT(openSerial()));
        QObject::connect(pushButton_closeport_2, SIGNAL(clicked()), Choose_Low, SLOT(closeSerial()));

        QMetaObject::connectSlotsByName(Choose_Low);
    } // setupUi

    void retranslateUi(QWidget *Choose_Low)
    {
        Choose_Low->setWindowTitle(QCoreApplication::translate("Choose_Low", "Receive", nullptr));
        groupBox_serialreceive_2->setTitle(QCoreApplication::translate("Choose_Low", "\344\270\262\345\217\243\346\216\245\346\224\266", nullptr));
        textEdit_serialreceive_2->setHtml(QCoreApplication::translate("Choose_Low", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Maple Mono NF CN'; font-size:18pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_rxNumber_2->setText(QCoreApplication::translate("Choose_Low", "RX:", nullptr));
        label_number_2->setText(QCoreApplication::translate("Choose_Low", "0", nullptr));
        groupBox_serial_2->setTitle(QCoreApplication::translate("Choose_Low", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
        label_serialport_3->setText(QCoreApplication::translate("Choose_Low", "\344\270\262\345\217\243\345\217\267\357\274\232", nullptr));
        label_baudrate_3->setText(QCoreApplication::translate("Choose_Low", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        comboBox_baudrate_2->setItemText(0, QCoreApplication::translate("Choose_Low", "115200", nullptr));
        comboBox_baudrate_2->setItemText(1, QCoreApplication::translate("Choose_Low", "57600", nullptr));
        comboBox_baudrate_2->setItemText(2, QCoreApplication::translate("Choose_Low", "38400", nullptr));
        comboBox_baudrate_2->setItemText(3, QCoreApplication::translate("Choose_Low", "19200", nullptr));
        comboBox_baudrate_2->setItemText(4, QCoreApplication::translate("Choose_Low", "9600", nullptr));
        comboBox_baudrate_2->setItemText(5, QCoreApplication::translate("Choose_Low", "2400", nullptr));

        label_databits_3->setText(QCoreApplication::translate("Choose_Low", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        comboBox_databits_2->setItemText(0, QCoreApplication::translate("Choose_Low", "8", nullptr));
        comboBox_databits_2->setItemText(1, QCoreApplication::translate("Choose_Low", "7", nullptr));
        comboBox_databits_2->setItemText(2, QCoreApplication::translate("Choose_Low", "6", nullptr));
        comboBox_databits_2->setItemText(3, QCoreApplication::translate("Choose_Low", "5", nullptr));

        label_stopbits_3->setText(QCoreApplication::translate("Choose_Low", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        comboBox_stopbits_2->setItemText(0, QCoreApplication::translate("Choose_Low", "1", nullptr));
        comboBox_stopbits_2->setItemText(1, QCoreApplication::translate("Choose_Low", "1.5", nullptr));
        comboBox_stopbits_2->setItemText(2, QCoreApplication::translate("Choose_Low", "2", nullptr));

        label_parity_3->setText(QCoreApplication::translate("Choose_Low", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        comboBox_parity_2->setItemText(0, QCoreApplication::translate("Choose_Low", "NONE", nullptr));
        comboBox_parity_2->setItemText(1, QCoreApplication::translate("Choose_Low", "ODD", nullptr));
        comboBox_parity_2->setItemText(2, QCoreApplication::translate("Choose_Low", "EVEN", nullptr));
        comboBox_parity_2->setItemText(3, QCoreApplication::translate("Choose_Low", "MARK", nullptr));
        comboBox_parity_2->setItemText(4, QCoreApplication::translate("Choose_Low", "SPACE", nullptr));

        pushButton_serialRest_2->setText(QCoreApplication::translate("Choose_Low", "\345\210\267\346\226\260\344\270\262\345\217\243\345\217\267", nullptr));
        pushButton_openport_2->setText(QCoreApplication::translate("Choose_Low", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        pushButton_closeport_2->setText(QCoreApplication::translate("Choose_Low", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        label_serialConnection_2->setText(QCoreApplication::translate("Choose_Low", "\346\234\252\350\277\236\346\216\245", nullptr));
        label_date_2->setText(QCoreApplication::translate("Choose_Low", "2025-11-2213:45:50 Saturday", nullptr));
        pushButton_clearserialreceive_2->setText(QCoreApplication::translate("Choose_Low", "\346\270\205\347\251\272\342\206\222", nullptr));
        pushButton_DataTest_2->setText(QCoreApplication::translate("Choose_Low", "\346\225\260\346\215\256\345\244\204\347\220\206", nullptr));
        label_date_3->setText(QCoreApplication::translate("Choose_Low", "2025/01/24 bbbbmmdddd", nullptr));
        groupBox_serialreceive_3->setTitle(QCoreApplication::translate("Choose_Low", "\347\273\230\345\233\276", nullptr));
        label_rxNumber_3->setText(QCoreApplication::translate("Choose_Low", "RX:", nullptr));
        label_number_3->setText(QCoreApplication::translate("Choose_Low", "0", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Choose_Low", "\351\235\242\347\247\257\345\233\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Choose_Low: public Ui_Choose_Low {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSE_LOW_H
