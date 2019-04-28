/********************************************************************************
** Form generated from reading UI file 'itemdelegatedemo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMDELEGATEDEMO_H
#define UI_ITEMDELEGATEDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemDelegateDemoClass
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *ItemDelegateDemoClass)
    {
        if (ItemDelegateDemoClass->objectName().isEmpty())
            ItemDelegateDemoClass->setObjectName(QStringLiteral("ItemDelegateDemoClass"));
        ItemDelegateDemoClass->resize(600, 400);
        verticalLayout = new QVBoxLayout(ItemDelegateDemoClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(ItemDelegateDemoClass);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setStyleSheet(QLatin1String("QTableView{\n"
"	border-radius:4px;\n"
"	gridline-color:#eeeeee;\n"
"	border:1px solid #eeeeee;\n"
"	background-color:#ffffff;\n"
"}\n"
"\n"
"QTableView::item{\n"
"	font-size: 14px;\n"
"	color: #666666;\n"
"	border-color:transparent;\n"
"}\n"
"\n"
"QTableView::item:selected{\n"
"	background-color:#ECF7FF;\n"
"	color:#666666;\n"
"}\n"
"\n"
"QHeaderView::section {    \n"
"    color: #333333;  \n"
"	height:38px;\n"
"    font-size:12px;  \n"
"    background-color: #f8f8f8;  \n"
"    border:1px solid #eeeeee;  \n"
"    border-left:none;  \n"
"}  \n"
"\n"
"QHeaderView::section:first   \n"
"{  \n"
"    border-left:1px solid #eeeeee;  \n"
"}"));
        tableWidget->setFrameShape(QFrame::NoFrame);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->horizontalHeader()->setMinimumSectionSize(40);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(ItemDelegateDemoClass);

        QMetaObject::connectSlotsByName(ItemDelegateDemoClass);
    } // setupUi

    void retranslateUi(QWidget *ItemDelegateDemoClass)
    {
        ItemDelegateDemoClass->setWindowTitle(QApplication::translate("ItemDelegateDemoClass", "ItemDelegateDemo", 0));
    } // retranslateUi

};

namespace Ui {
    class ItemDelegateDemoClass: public Ui_ItemDelegateDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMDELEGATEDEMO_H
