/********************************************************************************
** Form generated from reading UI file 'dataprocessing.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAPROCESSING_H
#define UI_DATAPROCESSING_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataProcessing
{
public:
    QWidget *widget;
    QChartView *chartView;
    QPushButton *pushButton_count;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_outFile;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_TotalImpulse;
    QLabel *label_AverageSpecificImpulse;
    QLabel *label_MaxSpecificImpulse;
    QLabel *label_AverageN;
    QLabel *label_MaxN;
    QWidget *verticalLayoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *label_11;
    QPushButton *pushButton_count_mr;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_m;
    QLabel *label_sps;
    QLabel *label_mr;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEdit_m;
    QLineEdit *lineEdit_sps;
    QLineEdit *lineEdit_mr;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_6;
    QComboBox *comboBox_kg_g;
    QComboBox *comboBox_MHz_kHz_Hz;

    void setupUi(QWidget *DataProcessing)
    {
        if (DataProcessing->objectName().isEmpty())
            DataProcessing->setObjectName("DataProcessing");
        DataProcessing->resize(1791, 1076);
        DataProcessing->setMinimumSize(QSize(1791, 1076));
        DataProcessing->setMaximumSize(QSize(1791, 1076));
        QFont font;
        font.setFamilies({QString::fromUtf8("Share-TechMono")});
        DataProcessing->setFont(font);
        widget = new QWidget(DataProcessing);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(1, 0, 1801, 1081));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("0xProto Nerd Font Propo")});
        widget->setFont(font1);
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	border-image: url(:/Welcom/background.jpg);\n"
"}"));
        chartView = new QChartView(widget);
        chartView->setObjectName("chartView");
        chartView->setGeometry(QRect(430, 20, 1341, 751));
        chartView->setStyleSheet(QString::fromUtf8("QWidget#chartView\n"
"{\n"
"	background-color:white;\n"
"}"));
        pushButton_count = new QPushButton(widget);
        pushButton_count->setObjectName("pushButton_count");
        pushButton_count->setGeometry(QRect(220, 690, 201, 81));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(23);
        pushButton_count->setFont(font2);
        pushButton_count->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));
        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 30, 164, 441));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font3.setPointSize(23);
        font3.setBold(false);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_2);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_6);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_4);

        pushButton_outFile = new QPushButton(widget);
        pushButton_outFile->setObjectName("pushButton_outFile");
        pushButton_outFile->setGeometry(QRect(10, 690, 201, 81));
        pushButton_outFile->setFont(font2);
        pushButton_outFile->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));
        layoutWidget2 = new QWidget(widget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(180, 30, 192, 441));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_TotalImpulse = new QLabel(layoutWidget2);
        label_TotalImpulse->setObjectName("label_TotalImpulse");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Share-TechMono")});
        font4.setPointSize(27);
        label_TotalImpulse->setFont(font4);
        label_TotalImpulse->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(label_TotalImpulse);

        label_AverageSpecificImpulse = new QLabel(layoutWidget2);
        label_AverageSpecificImpulse->setObjectName("label_AverageSpecificImpulse");
        label_AverageSpecificImpulse->setFont(font4);
        label_AverageSpecificImpulse->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(label_AverageSpecificImpulse);

        label_MaxSpecificImpulse = new QLabel(layoutWidget2);
        label_MaxSpecificImpulse->setObjectName("label_MaxSpecificImpulse");
        label_MaxSpecificImpulse->setFont(font4);
        label_MaxSpecificImpulse->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(label_MaxSpecificImpulse);

        label_AverageN = new QLabel(layoutWidget2);
        label_AverageN->setObjectName("label_AverageN");
        label_AverageN->setFont(font4);
        label_AverageN->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(label_AverageN);

        label_MaxN = new QLabel(layoutWidget2);
        label_MaxN->setObjectName("label_MaxN");
        label_MaxN->setFont(font4);
        label_MaxN->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(label_MaxN);

        verticalLayoutWidget3 = new QWidget(widget);
        verticalLayoutWidget3->setObjectName("verticalLayoutWidget3");
        verticalLayoutWidget3->setGeometry(QRect(380, 30, 41, 441));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        verticalLayoutWidget3->setFont(font5);
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(verticalLayoutWidget3);
        label_9->setObjectName("label_9");
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Share-TechMono")});
        font6.setPointSize(23);
        font6.setBold(false);
        label_9->setFont(font6);
        label_9->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(label_9);

        label_8 = new QLabel(verticalLayoutWidget3);
        label_8->setObjectName("label_8");
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Share-TechMono")});
        font7.setPointSize(27);
        font7.setBold(false);
        label_8->setFont(font7);
        label_8->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(label_8);

        label_10 = new QLabel(verticalLayoutWidget3);
        label_10->setObjectName("label_10");
        label_10->setFont(font7);
        label_10->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(label_10);

        label_7 = new QLabel(verticalLayoutWidget3);
        label_7->setObjectName("label_7");
        label_7->setFont(font6);
        label_7->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(label_7);

        label_11 = new QLabel(verticalLayoutWidget3);
        label_11->setObjectName("label_11");
        label_11->setFont(font6);
        label_11->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(label_11);

        pushButton_count_mr = new QPushButton(widget);
        pushButton_count_mr->setObjectName("pushButton_count_mr");
        pushButton_count_mr->setEnabled(true);
        pushButton_count_mr->setGeometry(QRect(340, 610, 81, 71));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_count_mr->sizePolicy().hasHeightForWidth());
        pushButton_count_mr->setSizePolicy(sizePolicy);
        pushButton_count_mr->setMinimumSize(QSize(0, 63));
        pushButton_count_mr->setMaximumSize(QSize(10000, 1000));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font8.setPointSize(12);
        font8.setBold(true);
        pushButton_count_mr->setFont(font8);
        pushButton_count_mr->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 470, 141, 211));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_m = new QLabel(layoutWidget);
        label_m->setObjectName("label_m");
        label_m->setFont(font3);
        label_m->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(label_m);

        label_sps = new QLabel(layoutWidget);
        label_sps->setObjectName("label_sps");
        label_sps->setFont(font3);
        label_sps->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(label_sps);

        label_mr = new QLabel(layoutWidget);
        label_mr->setObjectName("label_mr");
        label_mr->setFont(font3);
        label_mr->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(label_mr);

        layoutWidget3 = new QWidget(widget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(150, 470, 191, 211));
        verticalLayout_5 = new QVBoxLayout(layoutWidget3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEdit_m = new QLineEdit(layoutWidget3);
        lineEdit_m->setObjectName("lineEdit_m");
        lineEdit_m->setMinimumSize(QSize(0, 61));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font9.setPointSize(20);
        lineEdit_m->setFont(font9);
        lineEdit_m->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));

        verticalLayout_5->addWidget(lineEdit_m);

        lineEdit_sps = new QLineEdit(layoutWidget3);
        lineEdit_sps->setObjectName("lineEdit_sps");
        lineEdit_sps->setMinimumSize(QSize(0, 61));
        lineEdit_sps->setFont(font9);
        lineEdit_sps->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));

        verticalLayout_5->addWidget(lineEdit_sps);

        lineEdit_mr = new QLineEdit(layoutWidget3);
        lineEdit_mr->setObjectName("lineEdit_mr");
        lineEdit_mr->setMinimumSize(QSize(0, 61));
        lineEdit_mr->setMaximumSize(QSize(183, 61));
        lineEdit_mr->setFont(font9);
        lineEdit_mr->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));

        verticalLayout_5->addWidget(lineEdit_mr);

        layoutWidget4 = new QWidget(widget);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(336, 470, 97, 141));
        verticalLayout_6 = new QVBoxLayout(layoutWidget4);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        comboBox_kg_g = new QComboBox(layoutWidget4);
        comboBox_kg_g->addItem(QString());
        comboBox_kg_g->addItem(QString());
        comboBox_kg_g->setObjectName("comboBox_kg_g");
        comboBox_kg_g->setMinimumSize(QSize(80, 61));
        comboBox_kg_g->setMaximumSize(QSize(85, 61));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font10.setPointSize(18);
        comboBox_kg_g->setFont(font10);
        comboBox_kg_g->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));

        verticalLayout_6->addWidget(comboBox_kg_g);

        comboBox_MHz_kHz_Hz = new QComboBox(layoutWidget4);
        comboBox_MHz_kHz_Hz->addItem(QString());
        comboBox_MHz_kHz_Hz->addItem(QString());
        comboBox_MHz_kHz_Hz->addItem(QString());
        comboBox_MHz_kHz_Hz->setObjectName("comboBox_MHz_kHz_Hz");
        comboBox_MHz_kHz_Hz->setMinimumSize(QSize(80, 61));
        comboBox_MHz_kHz_Hz->setMaximumSize(QSize(85, 61));
        comboBox_MHz_kHz_Hz->setFont(font10);
        comboBox_MHz_kHz_Hz->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));

        verticalLayout_6->addWidget(comboBox_MHz_kHz_Hz);


        retranslateUi(DataProcessing);
        QObject::connect(pushButton_count, SIGNAL(clicked()), DataProcessing, SLOT(calculation()));
        QObject::connect(pushButton_outFile, SIGNAL(clicked()), DataProcessing, SLOT(outFile()));
        QObject::connect(pushButton_count_mr, SIGNAL(clicked()), DataProcessing, SLOT(calculation_mr()));

        QMetaObject::connectSlotsByName(DataProcessing);
    } // setupUi

    void retranslateUi(QWidget *DataProcessing)
    {
        DataProcessing->setWindowTitle(QCoreApplication::translate("DataProcessing", "Data processing", nullptr));
        pushButton_count->setText(QCoreApplication::translate("DataProcessing", "\350\256\241\347\256\227", nullptr));
        label->setText(QCoreApplication::translate("DataProcessing", "\346\200\273\345\206\262\351\207\217:", nullptr));
        label_2->setText(QCoreApplication::translate("DataProcessing", "\345\271\263\345\235\207\346\257\224\345\206\262:", nullptr));
        label_6->setText(QCoreApplication::translate("DataProcessing", "\346\234\200\345\244\247\346\257\224\345\206\262:", nullptr));
        label_3->setText(QCoreApplication::translate("DataProcessing", "\345\271\263\345\235\207\346\216\250\345\212\233:", nullptr));
        label_4->setText(QCoreApplication::translate("DataProcessing", "\346\234\200\345\244\247\346\216\250\345\212\233:", nullptr));
        pushButton_outFile->setText(QCoreApplication::translate("DataProcessing", "\345\257\274\345\207\272", nullptr));
        label_TotalImpulse->setText(QCoreApplication::translate("DataProcessing", "NULL", nullptr));
        label_AverageSpecificImpulse->setText(QCoreApplication::translate("DataProcessing", "NULL", nullptr));
        label_MaxSpecificImpulse->setText(QCoreApplication::translate("DataProcessing", "NULL", nullptr));
        label_AverageN->setText(QCoreApplication::translate("DataProcessing", "NULL", nullptr));
        label_MaxN->setText(QCoreApplication::translate("DataProcessing", "NULL", nullptr));
        label_9->setText(QCoreApplication::translate("DataProcessing", "Ns", nullptr));
        label_8->setText(QCoreApplication::translate("DataProcessing", "s", nullptr));
        label_10->setText(QCoreApplication::translate("DataProcessing", "s", nullptr));
        label_7->setText(QCoreApplication::translate("DataProcessing", "N", nullptr));
        label_11->setText(QCoreApplication::translate("DataProcessing", "N", nullptr));
        pushButton_count_mr->setText(QCoreApplication::translate("DataProcessing", "\342\206\220\347\202\271\346\210\221\n"
"   \350\256\241\347\256\227", nullptr));
        label_m->setText(QCoreApplication::translate("DataProcessing", "\347\207\203\346\226\231\350\264\250\351\207\217:", nullptr));
        label_sps->setText(QCoreApplication::translate("DataProcessing", "\351\207\207\351\233\206\351\200\237\347\216\207:", nullptr));
        label_mr->setText(QCoreApplication::translate("DataProcessing", "\350\264\250\351\207\217\346\265\201\351\207\217:", nullptr));
        lineEdit_m->setText(QString());
        lineEdit_sps->setText(QCoreApplication::translate("DataProcessing", "0.002", nullptr));
        lineEdit_mr->setText(QString());
        comboBox_kg_g->setItemText(0, QCoreApplication::translate("DataProcessing", "kg", nullptr));
        comboBox_kg_g->setItemText(1, QCoreApplication::translate("DataProcessing", "g", nullptr));

        comboBox_MHz_kHz_Hz->setItemText(0, QCoreApplication::translate("DataProcessing", "MHz", nullptr));
        comboBox_MHz_kHz_Hz->setItemText(1, QCoreApplication::translate("DataProcessing", "kHz", nullptr));
        comboBox_MHz_kHz_Hz->setItemText(2, QCoreApplication::translate("DataProcessing", "Hz", nullptr));

    } // retranslateUi

};

namespace Ui {
    class DataProcessing: public Ui_DataProcessing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAPROCESSING_H
