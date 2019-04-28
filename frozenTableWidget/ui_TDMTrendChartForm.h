/********************************************************************************
** Form generated from reading UI file 'TDMTrendChartForm.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDMTRENDCHARTFORM_H
#define UI_TDMTRENDCHARTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qchartview.h>

QT_BEGIN_NAMESPACE

class Ui_TDMTrendChartForm
{
public:
    QVBoxLayout *verticalLayout;
    QChartView *chartView;

    void setupUi(QWidget *TDMTrendChartForm)
    {
        if (TDMTrendChartForm->objectName().isEmpty())
            TDMTrendChartForm->setObjectName(QStringLiteral("TDMTrendChartForm"));
        TDMTrendChartForm->resize(677, 382);
        TDMTrendChartForm->setStyleSheet(QStringLiteral("background-color: rgb(248, 251, 255);"));
        verticalLayout = new QVBoxLayout(TDMTrendChartForm);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        chartView = new QChartView(TDMTrendChartForm);
        chartView->setObjectName(QStringLiteral("chartView"));
        chartView->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(chartView);


        retranslateUi(TDMTrendChartForm);

        QMetaObject::connectSlotsByName(TDMTrendChartForm);
    } // setupUi

    void retranslateUi(QWidget *TDMTrendChartForm)
    {
        TDMTrendChartForm->setWindowTitle(QApplication::translate("TDMTrendChartForm", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class TDMTrendChartForm: public Ui_TDMTrendChartForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDMTRENDCHARTFORM_H
