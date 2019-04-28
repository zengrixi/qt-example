/********************************************************************************
** Form generated from reading UI file 'headviewwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEADVIEWWIDGET_H
#define UI_HEADVIEWWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HeadViewWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *contentLabel;
    QLabel *queryLabel;
    QLabel *editLabel;

    void setupUi(QWidget *HeadViewWidget)
    {
        if (HeadViewWidget->objectName().isEmpty())
            HeadViewWidget->setObjectName(QStringLiteral("HeadViewWidget"));
        HeadViewWidget->resize(400, 40);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HeadViewWidget->sizePolicy().hasHeightForWidth());
        HeadViewWidget->setSizePolicy(sizePolicy);
        HeadViewWidget->setStyleSheet(QLatin1String("*{font-family: Microsoft YaHei;}\n"
"QLabel#editLabel{\n"
"	border-image:url(:/ItemDelegateDemo/Resources/editicon.png);\n"
"	border-width:0px;\n"
"}\n"
"\n"
"QLabel#queryLabel{\n"
"	border-image:url(:/ItemDelegateDemo/Resources/queryico.png);\n"
"	border-width:0px;\n"
"}\n"
"\n"
"QLabel#contentLabel{\n"
"	background-color: transparent;\n"
"	font-size: 12px;\n"
"	color: #333333;\n"
"}\n"
"\n"
"QWidget#HeadViewWidget{\n"
"	background-color: transparent;\n"
"}"));
        horizontalLayout = new QHBoxLayout(HeadViewWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        contentLabel = new QLabel(HeadViewWidget);
        contentLabel->setObjectName(QStringLiteral("contentLabel"));
        sizePolicy.setHeightForWidth(contentLabel->sizePolicy().hasHeightForWidth());
        contentLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(contentLabel);

        queryLabel = new QLabel(HeadViewWidget);
        queryLabel->setObjectName(QStringLiteral("queryLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(queryLabel->sizePolicy().hasHeightForWidth());
        queryLabel->setSizePolicy(sizePolicy1);
        queryLabel->setMinimumSize(QSize(16, 16));
        queryLabel->setMaximumSize(QSize(16, 16));

        horizontalLayout->addWidget(queryLabel);

        editLabel = new QLabel(HeadViewWidget);
        editLabel->setObjectName(QStringLiteral("editLabel"));
        sizePolicy1.setHeightForWidth(editLabel->sizePolicy().hasHeightForWidth());
        editLabel->setSizePolicy(sizePolicy1);
        editLabel->setMinimumSize(QSize(16, 16));
        editLabel->setMaximumSize(QSize(16, 16));

        horizontalLayout->addWidget(editLabel);


        retranslateUi(HeadViewWidget);

        QMetaObject::connectSlotsByName(HeadViewWidget);
    } // setupUi

    void retranslateUi(QWidget *HeadViewWidget)
    {
        HeadViewWidget->setWindowTitle(QApplication::translate("HeadViewWidget", "HeadViewWidget", 0));
        contentLabel->setText(QApplication::translate("HeadViewWidget", "TextLabel", 0));
        queryLabel->setText(QString());
        editLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HeadViewWidget: public Ui_HeadViewWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEADVIEWWIDGET_H
