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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataProcessing
{
public:
    QChartView *chartView;

    void setupUi(QWidget *DataProcessing)
    {
        if (DataProcessing->objectName().isEmpty())
            DataProcessing->setObjectName("DataProcessing");
        DataProcessing->resize(1641, 872);
        chartView = new QChartView(DataProcessing);
        chartView->setObjectName("chartView");
        chartView->setGeometry(QRect(795, 200, 451, 361));

        retranslateUi(DataProcessing);

        QMetaObject::connectSlotsByName(DataProcessing);
    } // setupUi

    void retranslateUi(QWidget *DataProcessing)
    {
        DataProcessing->setWindowTitle(QCoreApplication::translate("DataProcessing", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataProcessing: public Ui_DataProcessing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAPROCESSING_H
