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
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QLabel *label_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_outFile;

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
        widget->setGeometry(QRect(0, 0, 1801, 1081));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("0xProto Nerd Font Propo")});
        widget->setFont(font1);
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	border-image: url(:/Welcom/background.jpg);\n"
"}"));
        chartView = new QChartView(widget);
        chartView->setObjectName("chartView");
        chartView->setGeometry(QRect(430, 20, 1341, 741));
        chartView->setStyleSheet(QString::fromUtf8("QWidget#chartView\n"
"{\n"
"	background-color:white;\n"
"}"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 590, 401, 81));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(23);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(150, 500, 191, 81));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font3.setPointSize(20);
        lineEdit->setFont(font3);
        lineEdit->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));
        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(330, 500, 81, 81));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font4.setPointSize(21);
        comboBox->setFont(font4);
        comboBox->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 500, 149, 75));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font5.setPointSize(23);
        font5.setBold(false);
        label_5->setFont(font5);
        label_5->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 30, 164, 441));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font5);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_2);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font5);
        label_6->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_6);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font5);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font5);
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_4);

        pushButton_outFile = new QPushButton(widget);
        pushButton_outFile->setObjectName("pushButton_outFile");
        pushButton_outFile->setGeometry(QRect(10, 680, 401, 81));
        pushButton_outFile->setFont(font2);
        pushButton_outFile->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));

        retranslateUi(DataProcessing);
        QObject::connect(pushButton_outFile, SIGNAL(clicked()), DataProcessing, SLOT(outFile()));

        QMetaObject::connectSlotsByName(DataProcessing);
    } // setupUi

    void retranslateUi(QWidget *DataProcessing)
    {
        DataProcessing->setWindowTitle(QCoreApplication::translate("DataProcessing", "Data processing", nullptr));
        pushButton->setText(QCoreApplication::translate("DataProcessing", "\350\256\241\347\256\227", nullptr));
        lineEdit->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("DataProcessing", "  kg", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("DataProcessing", "  g", nullptr));

        label_5->setText(QCoreApplication::translate("DataProcessing", "\347\207\203\346\226\231\350\264\250\351\207\217:", nullptr));
        label->setText(QCoreApplication::translate("DataProcessing", "\346\200\273\345\206\262\351\207\217:", nullptr));
        label_2->setText(QCoreApplication::translate("DataProcessing", "\345\271\263\345\235\207\346\257\224\345\206\262:", nullptr));
        label_6->setText(QCoreApplication::translate("DataProcessing", "\346\234\200\345\244\247\346\257\224\345\206\262:", nullptr));
        label_3->setText(QCoreApplication::translate("DataProcessing", "\345\271\263\345\235\207\346\216\250\345\212\233:", nullptr));
        label_4->setText(QCoreApplication::translate("DataProcessing", "\346\234\200\345\244\247\346\216\250\345\212\233:", nullptr));
        pushButton_outFile->setText(QCoreApplication::translate("DataProcessing", "\345\257\274\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataProcessing: public Ui_DataProcessing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAPROCESSING_H
