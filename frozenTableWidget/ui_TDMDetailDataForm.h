/********************************************************************************
** Form generated from reading UI file 'TDMDetailDataForm.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDMDETAILDATAFORM_H
#define UI_TDMDETAILDATAFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "PieForm.h"

QT_BEGIN_NAMESPACE

class Ui_TDMDetailDataForm
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QWidget *dutyFinishedWgt;
    QVBoxLayout *verticalLayout_7;
    QLabel *titleLabel1;
    PieForm *widget;
    QSpacerItem *verticalSpacer_6;
    QFrame *spacer1;
    QWidget *resubmitWgt;
    QVBoxLayout *verticalLayout_2;
    QLabel *titleLabel2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *continueRateLabel;
    QLabel *continueRateValueLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *returnRateLabel;
    QLabel *returnRateValueLabel;
    QSpacerItem *verticalSpacer;
    QFrame *spacer2;
    QWidget *communicateWgt;
    QVBoxLayout *verticalLayout_3;
    QLabel *titleLabel3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *timeoutConnectLabel;
    QLabel *timeoutConnectValueLabel;
    QHBoxLayout *horizontalLayout_6;
    QLabel *crmBandRateLabel;
    QLabel *crmBandRateValueLabel;
    QSpacerItem *verticalSpacer_2;
    QFrame *spacer3;
    QWidget *homeworkWgt;
    QVBoxLayout *verticalLayout_4;
    QLabel *titleLabel4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *correctRateLabel;
    QLabel *correctRateValueLabel;
    QHBoxLayout *horizontalLayout_8;
    QLabel *homeworkSubmitRateLabel;
    QLabel *homeworkSubmitRateValueLabel;
    QHBoxLayout *horizontalLayout_9;
    QLabel *markingOvertimeLabel;
    QLabel *markingOvertimeValueLabel;
    QHBoxLayout *horizontalLayout_10;
    QLabel *correctResponseTimeLabel;
    QLabel *correctResponseTimeValueLabel;
    QHBoxLayout *horizontalLayout_11;
    QLabel *correctTimeLabel;
    QLabel *correctTimeValueLabel;
    QSpacerItem *verticalSpacer_3;
    QFrame *spacer4;
    QWidget *broadcastWgt;
    QVBoxLayout *verticalLayout_5;
    QLabel *titleLabel5;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_12;
    QLabel *attendanceRateLabel;
    QLabel *attendanceRateValueLabel;
    QHBoxLayout *horizontalLayout_13;
    QLabel *broadcastLateTimesLabel;
    QLabel *broadcastLateTimesValueLabel;
    QSpacerItem *verticalSpacer_4;
    QFrame *spacer5;
    QWidget *qcWgt;
    QVBoxLayout *verticalLayout_6;
    QLabel *titleLabel6;
    QHBoxLayout *horizontalLayout_16;
    QLabel *taskQcScoreLabel;
    QLabel *taskQcScoreValueLabel;
    QHBoxLayout *horizontalLayout_17;
    QLabel *taskCorrectErrorLabel;
    QLabel *taskCorrectErrorValueLabel;
    QHBoxLayout *horizontalLayout_14;
    QLabel *questionQcScoreLabel;
    QLabel *questionQcScoreValueLabel;
    QHBoxLayout *horizontalLayout_15;
    QLabel *questionCorrectErrorLabel;
    QLabel *questionCorrectErrorValueLabel;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QWidget *TDMDetailDataForm)
    {
        if (TDMDetailDataForm->objectName().isEmpty())
            TDMDetailDataForm->setObjectName(QStringLiteral("TDMDetailDataForm"));
        TDMDetailDataForm->resize(1039, 269);
        TDMDetailDataForm->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(TDMDetailDataForm);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(TDMDetailDataForm);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame\n"
"{\n"
"	background-color:rgba(246, 248, 251, 1);\n"
"}\n"
"\n"
"QFrame#spacer1, QFrame#spacer2, QFrame#spacer3, QFrame#spacer4, QFrame#spacer5\n"
"{\n"
"	background-color: qlineargradient(spread:reflect, x1:1, y1:0.5, x2:1, y2:0, stop:0 rgba(220, 220, 220, 255), stop:1 rgba(246, 248, 251, 1));\n"
"}\n"
"\n"
"QLabel#titleLabel1, QLabel#titleLabel2, QLabel#titleLabel3, QLabel#titleLabel4, QLabel#titleLabel5, QLabel#titleLabel6\n"
"{\n"
"	color:#333333;\n"
"	\n"
"	font-family:\"Microsoft Yahei\";\n"
"	font-size:16px;\n"
"	font-weight:bold;\n"
"\n"
"	border-top:none;\n"
"	border-bottom:none;\n"
"\n"
"	border-right:none;\n"
"	\n"
"	background-image: url(:/images/vSpacer.png);\n"
"	background-repeat:none;\n"
"	background-position:left;\n"
"	\n"
"\n"
"\n"
"\n"
"	margin-left:20px;\n"
"	padding-left:10px;\n"
"\n"
"	min-height:16px;\n"
"	max-height:16px;\n"
"\n"
"\n"
"}\n"
"\n"
"QLabel#continueRateLabel, /*\347\273\255\344\277\235\347\216\207*/\n"
"QLabel#returnRateLabel,/*\351\200\200\350\264\271\347\216"
                        "\207*/\n"
"QLabel#timeoutConnectLabel,/*\350\266\205\346\227\266\350\201\224\347\263\273*/\n"
"QLabel#crmBandRateLabel,/*\345\276\256\344\277\241CRM\347\273\221\345\256\232\347\216\207*/\n"
"QLabel#correctRateLabel,/*\350\256\242\346\255\243\347\216\207*/\n"
"QLabel#homeworkSubmitRateLabel,/*\344\275\234\344\270\232\346\217\220\344\272\244\347\216\207*/\n"
"QLabel#markingOvertimeLabel,/*\350\266\205\346\227\266\346\211\271\346\224\271\351\207\217*/\n"
"QLabel#correctResponseTimeLabel,/*\346\211\271\346\224\271\345\223\215\345\272\224\346\227\266\351\225\277*/\n"
"QLabel#correctTimeLabel,/*\346\211\271\346\224\271\346\227\266\351\225\277*/\n"
"QLabel#attendanceRateLabel,/*\345\255\246\347\224\237\345\207\272\345\213\244\347\216\207*/\n"
"QLabel#broadcastLateTimesLabel,/*\347\233\264\346\222\255\350\277\237\345\210\260\346\254\241\346\225\260*/\n"
"QLabel#taskQcScoreLabel,/*\344\275\234\344\270\232\350\264\250\346\243\200\345\276\227\345\210\206*/\n"
"QLabel#taskCorrectErrorLabel,/*\344\275\234\344\270\232\346\211"
                        "\271\351\224\231\346\225\260\351\207\217*/\n"
"QLabel#questionQcScoreLabel,/*\347\255\224\347\226\221\350\264\250\346\243\200\345\276\227\345\210\206*/\n"
"QLabel#questionCorrectErrorLabel\n"
"{\n"
"	color:#333333;\n"
"	font-family:\"Microsoft Yahei\";\n"
"	font-size:14px;\n"
"	font-weight:bold;\n"
"}\n"
"\n"
"QLabel#continueRateValueLabel,/*\347\273\255\344\277\235\347\216\207*/\n"
"QLabel#returnRateValueLabel,/*\351\200\200\350\264\271\347\216\207*/\n"
"QLabel#timeoutConnectValueLabel,/*\350\266\205\346\227\266\350\201\224\347\263\273*/\n"
"QLabel#crmBandRateValueLabel,/*\345\276\256\344\277\241CRM\347\273\221\345\256\232\347\216\207*/\n"
"QLabel#correctRateValueLabel,/*\350\256\242\346\255\243\347\216\207*/\n"
"QLabel#homeworkSubmitRateValueLabel,/*\344\275\234\344\270\232\346\217\220\344\272\244\347\216\207*/\n"
"QLabel#markingOvertimeValueLabel,/*\350\266\205\346\227\266\346\211\271\346\224\271\351\207\217*/\n"
"QLabel#correctResponseTimeValueLabel,/*\346\211\271\346\224\271\345\223\215\345\272\224\346\227"
                        "\266\351\225\277*/\n"
"QLabel#correctTimeValueLabel,/*\346\211\271\346\224\271\346\227\266\351\225\277*/\n"
"QLabel#attendanceRateValueLabel,/*\345\255\246\347\224\237\345\207\272\345\213\244\347\216\207*/\n"
"QLabel#broadcastLateTimesValueLabel,/*\347\233\264\346\222\255\350\277\237\345\210\260\346\254\241\346\225\260*/\n"
"QLabel#taskQcScoreValueLabel,/*\344\275\234\344\270\232\350\264\250\346\243\200\345\276\227\345\210\206*/\n"
"QLabel#taskCorrectErrorValueLabel,/*\344\275\234\344\270\232\346\211\271\351\224\231\346\225\260\351\207\217*/\n"
"QLabel#questionQcScoreValueLabel,/*\347\255\224\347\226\221\350\264\250\346\243\200\345\276\227\345\210\206*/\n"
"QLabel#questionCorrectErrorValueLabel\n"
"{\n"
"	color:#333333;\n"
"	font-family:\"Microsoft Yahei\";\n"
"	font-size:14px;\n"
"}\n"
"\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        dutyFinishedWgt = new QWidget(frame);
        dutyFinishedWgt->setObjectName(QStringLiteral("dutyFinishedWgt"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dutyFinishedWgt->sizePolicy().hasHeightForWidth());
        dutyFinishedWgt->setSizePolicy(sizePolicy);
        dutyFinishedWgt->setMinimumSize(QSize(180, 0));
        dutyFinishedWgt->setMaximumSize(QSize(180, 16777215));
        verticalLayout_7 = new QVBoxLayout(dutyFinishedWgt);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 20, 0, 0);
        titleLabel1 = new QLabel(dutyFinishedWgt);
        titleLabel1->setObjectName(QStringLiteral("titleLabel1"));
        titleLabel1->setStyleSheet(QStringLiteral(""));

        verticalLayout_7->addWidget(titleLabel1);

        widget = new PieForm(dutyFinishedWgt);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout_7->addWidget(widget);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_6);


        horizontalLayout->addWidget(dutyFinishedWgt);

        spacer1 = new QFrame(frame);
        spacer1->setObjectName(QStringLiteral("spacer1"));
        spacer1->setMinimumSize(QSize(2, 0));
        spacer1->setMaximumSize(QSize(2, 16777215));
        spacer1->setStyleSheet(QStringLiteral(""));
        spacer1->setFrameShape(QFrame::StyledPanel);
        spacer1->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(spacer1);

        resubmitWgt = new QWidget(frame);
        resubmitWgt->setObjectName(QStringLiteral("resubmitWgt"));
        resubmitWgt->setStyleSheet(QStringLiteral("backround:transparent;"));
        verticalLayout_2 = new QVBoxLayout(resubmitWgt);
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 20, 9, 0);
        titleLabel2 = new QLabel(resubmitWgt);
        titleLabel2->setObjectName(QStringLiteral("titleLabel2"));

        verticalLayout_2->addWidget(titleLabel2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_2->setContentsMargins(34, -1, -1, -1);
        continueRateLabel = new QLabel(resubmitWgt);
        continueRateLabel->setObjectName(QStringLiteral("continueRateLabel"));

        horizontalLayout_2->addWidget(continueRateLabel);

        continueRateValueLabel = new QLabel(resubmitWgt);
        continueRateValueLabel->setObjectName(QStringLiteral("continueRateValueLabel"));

        horizontalLayout_2->addWidget(continueRateValueLabel);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(34, -1, -1, -1);
        returnRateLabel = new QLabel(resubmitWgt);
        returnRateLabel->setObjectName(QStringLiteral("returnRateLabel"));

        horizontalLayout_3->addWidget(returnRateLabel);

        returnRateValueLabel = new QLabel(resubmitWgt);
        returnRateValueLabel->setObjectName(QStringLiteral("returnRateValueLabel"));

        horizontalLayout_3->addWidget(returnRateValueLabel);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 124, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addWidget(resubmitWgt);

        spacer2 = new QFrame(frame);
        spacer2->setObjectName(QStringLiteral("spacer2"));
        spacer2->setMinimumSize(QSize(2, 0));
        spacer2->setMaximumSize(QSize(2, 16777215));
        spacer2->setStyleSheet(QStringLiteral(""));
        spacer2->setFrameShape(QFrame::StyledPanel);
        spacer2->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(spacer2);

        communicateWgt = new QWidget(frame);
        communicateWgt->setObjectName(QStringLiteral("communicateWgt"));
        verticalLayout_3 = new QVBoxLayout(communicateWgt);
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 20, 9, 0);
        titleLabel3 = new QLabel(communicateWgt);
        titleLabel3->setObjectName(QStringLiteral("titleLabel3"));

        verticalLayout_3->addWidget(titleLabel3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_4->setContentsMargins(34, -1, -1, -1);
        timeoutConnectLabel = new QLabel(communicateWgt);
        timeoutConnectLabel->setObjectName(QStringLiteral("timeoutConnectLabel"));

        horizontalLayout_4->addWidget(timeoutConnectLabel);

        timeoutConnectValueLabel = new QLabel(communicateWgt);
        timeoutConnectValueLabel->setObjectName(QStringLiteral("timeoutConnectValueLabel"));

        horizontalLayout_4->addWidget(timeoutConnectValueLabel);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_6->setContentsMargins(34, -1, -1, -1);
        crmBandRateLabel = new QLabel(communicateWgt);
        crmBandRateLabel->setObjectName(QStringLiteral("crmBandRateLabel"));

        horizontalLayout_6->addWidget(crmBandRateLabel);

        crmBandRateValueLabel = new QLabel(communicateWgt);
        crmBandRateValueLabel->setObjectName(QStringLiteral("crmBandRateValueLabel"));

        horizontalLayout_6->addWidget(crmBandRateValueLabel);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 124, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        titleLabel3->raise();

        horizontalLayout->addWidget(communicateWgt);

        spacer3 = new QFrame(frame);
        spacer3->setObjectName(QStringLiteral("spacer3"));
        spacer3->setMinimumSize(QSize(2, 0));
        spacer3->setMaximumSize(QSize(2, 16777215));
        spacer3->setStyleSheet(QStringLiteral(""));
        spacer3->setFrameShape(QFrame::StyledPanel);
        spacer3->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(spacer3);

        homeworkWgt = new QWidget(frame);
        homeworkWgt->setObjectName(QStringLiteral("homeworkWgt"));
        verticalLayout_4 = new QVBoxLayout(homeworkWgt);
        verticalLayout_4->setSpacing(20);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 20, 9, 0);
        titleLabel4 = new QLabel(homeworkWgt);
        titleLabel4->setObjectName(QStringLiteral("titleLabel4"));

        verticalLayout_4->addWidget(titleLabel4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(10);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_7->setContentsMargins(34, -1, -1, -1);
        correctRateLabel = new QLabel(homeworkWgt);
        correctRateLabel->setObjectName(QStringLiteral("correctRateLabel"));

        horizontalLayout_7->addWidget(correctRateLabel);

        correctRateValueLabel = new QLabel(homeworkWgt);
        correctRateValueLabel->setObjectName(QStringLiteral("correctRateValueLabel"));

        horizontalLayout_7->addWidget(correctRateValueLabel);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(10);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_8->setContentsMargins(34, -1, -1, -1);
        homeworkSubmitRateLabel = new QLabel(homeworkWgt);
        homeworkSubmitRateLabel->setObjectName(QStringLiteral("homeworkSubmitRateLabel"));

        horizontalLayout_8->addWidget(homeworkSubmitRateLabel);

        homeworkSubmitRateValueLabel = new QLabel(homeworkWgt);
        homeworkSubmitRateValueLabel->setObjectName(QStringLiteral("homeworkSubmitRateValueLabel"));

        horizontalLayout_8->addWidget(homeworkSubmitRateValueLabel);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(10);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_9->setContentsMargins(34, -1, -1, -1);
        markingOvertimeLabel = new QLabel(homeworkWgt);
        markingOvertimeLabel->setObjectName(QStringLiteral("markingOvertimeLabel"));

        horizontalLayout_9->addWidget(markingOvertimeLabel);

        markingOvertimeValueLabel = new QLabel(homeworkWgt);
        markingOvertimeValueLabel->setObjectName(QStringLiteral("markingOvertimeValueLabel"));

        horizontalLayout_9->addWidget(markingOvertimeValueLabel);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(10);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_10->setContentsMargins(34, -1, -1, -1);
        correctResponseTimeLabel = new QLabel(homeworkWgt);
        correctResponseTimeLabel->setObjectName(QStringLiteral("correctResponseTimeLabel"));

        horizontalLayout_10->addWidget(correctResponseTimeLabel);

        correctResponseTimeValueLabel = new QLabel(homeworkWgt);
        correctResponseTimeValueLabel->setObjectName(QStringLiteral("correctResponseTimeValueLabel"));

        horizontalLayout_10->addWidget(correctResponseTimeValueLabel);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(10);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_11->setContentsMargins(34, -1, -1, -1);
        correctTimeLabel = new QLabel(homeworkWgt);
        correctTimeLabel->setObjectName(QStringLiteral("correctTimeLabel"));

        horizontalLayout_11->addWidget(correctTimeLabel);

        correctTimeValueLabel = new QLabel(homeworkWgt);
        correctTimeValueLabel->setObjectName(QStringLiteral("correctTimeValueLabel"));

        horizontalLayout_11->addWidget(correctTimeValueLabel);


        verticalLayout_4->addLayout(horizontalLayout_11);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(homeworkWgt);

        spacer4 = new QFrame(frame);
        spacer4->setObjectName(QStringLiteral("spacer4"));
        spacer4->setMinimumSize(QSize(2, 0));
        spacer4->setMaximumSize(QSize(2, 16777215));
        spacer4->setStyleSheet(QStringLiteral(""));
        spacer4->setFrameShape(QFrame::StyledPanel);
        spacer4->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(spacer4);

        broadcastWgt = new QWidget(frame);
        broadcastWgt->setObjectName(QStringLiteral("broadcastWgt"));
        verticalLayout_5 = new QVBoxLayout(broadcastWgt);
        verticalLayout_5->setSpacing(20);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 20, 9, 0);
        titleLabel5 = new QLabel(broadcastWgt);
        titleLabel5->setObjectName(QStringLiteral("titleLabel5"));

        verticalLayout_5->addWidget(titleLabel5);

        frame_8 = new QFrame(broadcastWgt);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        horizontalLayout_12 = new QHBoxLayout(frame_8);
        horizontalLayout_12->setSpacing(10);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_12->setContentsMargins(34, -1, -1, -1);
        attendanceRateLabel = new QLabel(frame_8);
        attendanceRateLabel->setObjectName(QStringLiteral("attendanceRateLabel"));

        horizontalLayout_12->addWidget(attendanceRateLabel);

        attendanceRateValueLabel = new QLabel(frame_8);
        attendanceRateValueLabel->setObjectName(QStringLiteral("attendanceRateValueLabel"));

        horizontalLayout_12->addWidget(attendanceRateValueLabel);


        verticalLayout_5->addWidget(frame_8);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(10);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_13->setContentsMargins(34, -1, -1, -1);
        broadcastLateTimesLabel = new QLabel(broadcastWgt);
        broadcastLateTimesLabel->setObjectName(QStringLiteral("broadcastLateTimesLabel"));

        horizontalLayout_13->addWidget(broadcastLateTimesLabel);

        broadcastLateTimesValueLabel = new QLabel(broadcastWgt);
        broadcastLateTimesValueLabel->setObjectName(QStringLiteral("broadcastLateTimesValueLabel"));

        horizontalLayout_13->addWidget(broadcastLateTimesValueLabel);


        verticalLayout_5->addLayout(horizontalLayout_13);

        verticalSpacer_4 = new QSpacerItem(20, 124, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);


        horizontalLayout->addWidget(broadcastWgt);

        spacer5 = new QFrame(frame);
        spacer5->setObjectName(QStringLiteral("spacer5"));
        spacer5->setMinimumSize(QSize(2, 0));
        spacer5->setMaximumSize(QSize(2, 16777215));
        spacer5->setStyleSheet(QStringLiteral(""));
        spacer5->setFrameShape(QFrame::StyledPanel);
        spacer5->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(spacer5);

        qcWgt = new QWidget(frame);
        qcWgt->setObjectName(QStringLiteral("qcWgt"));
        verticalLayout_6 = new QVBoxLayout(qcWgt);
        verticalLayout_6->setSpacing(20);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 20, 9, 0);
        titleLabel6 = new QLabel(qcWgt);
        titleLabel6->setObjectName(QStringLiteral("titleLabel6"));

        verticalLayout_6->addWidget(titleLabel6);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(10);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_16->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_16->setContentsMargins(34, -1, -1, -1);
        taskQcScoreLabel = new QLabel(qcWgt);
        taskQcScoreLabel->setObjectName(QStringLiteral("taskQcScoreLabel"));

        horizontalLayout_16->addWidget(taskQcScoreLabel);

        taskQcScoreValueLabel = new QLabel(qcWgt);
        taskQcScoreValueLabel->setObjectName(QStringLiteral("taskQcScoreValueLabel"));

        horizontalLayout_16->addWidget(taskQcScoreValueLabel);


        verticalLayout_6->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(10);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_17->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_17->setContentsMargins(34, -1, -1, -1);
        taskCorrectErrorLabel = new QLabel(qcWgt);
        taskCorrectErrorLabel->setObjectName(QStringLiteral("taskCorrectErrorLabel"));

        horizontalLayout_17->addWidget(taskCorrectErrorLabel);

        taskCorrectErrorValueLabel = new QLabel(qcWgt);
        taskCorrectErrorValueLabel->setObjectName(QStringLiteral("taskCorrectErrorValueLabel"));

        horizontalLayout_17->addWidget(taskCorrectErrorValueLabel);


        verticalLayout_6->addLayout(horizontalLayout_17);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(10);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_14->setContentsMargins(34, -1, -1, -1);
        questionQcScoreLabel = new QLabel(qcWgt);
        questionQcScoreLabel->setObjectName(QStringLiteral("questionQcScoreLabel"));

        horizontalLayout_14->addWidget(questionQcScoreLabel);

        questionQcScoreValueLabel = new QLabel(qcWgt);
        questionQcScoreValueLabel->setObjectName(QStringLiteral("questionQcScoreValueLabel"));

        horizontalLayout_14->addWidget(questionQcScoreValueLabel);


        verticalLayout_6->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(10);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_15->setContentsMargins(34, -1, -1, -1);
        questionCorrectErrorLabel = new QLabel(qcWgt);
        questionCorrectErrorLabel->setObjectName(QStringLiteral("questionCorrectErrorLabel"));

        horizontalLayout_15->addWidget(questionCorrectErrorLabel);

        questionCorrectErrorValueLabel = new QLabel(qcWgt);
        questionCorrectErrorValueLabel->setObjectName(QStringLiteral("questionCorrectErrorValueLabel"));

        horizontalLayout_15->addWidget(questionCorrectErrorValueLabel);


        verticalLayout_6->addLayout(horizontalLayout_15);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);


        horizontalLayout->addWidget(qcWgt);

        dutyFinishedWgt->raise();
        resubmitWgt->raise();
        communicateWgt->raise();
        homeworkWgt->raise();
        broadcastWgt->raise();
        qcWgt->raise();
        spacer1->raise();
        spacer2->raise();
        spacer3->raise();
        spacer4->raise();
        spacer5->raise();

        verticalLayout->addWidget(frame);


        retranslateUi(TDMDetailDataForm);

        QMetaObject::connectSlotsByName(TDMDetailDataForm);
    } // setupUi

    void retranslateUi(QWidget *TDMDetailDataForm)
    {
        TDMDetailDataForm->setWindowTitle(QApplication::translate("TDMDetailDataForm", "Form", 0));
        titleLabel1->setText(QApplication::translate("TDMDetailDataForm", "\347\273\255\346\212\245", 0));
        titleLabel2->setText(QApplication::translate("TDMDetailDataForm", "\347\273\255\346\212\245", 0));
        continueRateLabel->setText(QApplication::translate("TDMDetailDataForm", "\347\273\255\346\212\245\347\216\207", 0));
        continueRateValueLabel->setText(QApplication::translate("TDMDetailDataForm", "85%", 0));
        returnRateLabel->setText(QApplication::translate("TDMDetailDataForm", "\351\200\200\350\264\271\347\216\207", 0));
        returnRateValueLabel->setText(QApplication::translate("TDMDetailDataForm", "80%", 0));
        titleLabel3->setText(QApplication::translate("TDMDetailDataForm", "\346\262\237\351\200\232", 0));
        timeoutConnectLabel->setText(QApplication::translate("TDMDetailDataForm", "\350\266\205\346\227\266\350\201\224\347\263\273", 0));
        timeoutConnectValueLabel->setText(QApplication::translate("TDMDetailDataForm", "20\357\274\21010%\357\274\211", 0));
        crmBandRateLabel->setText(QApplication::translate("TDMDetailDataForm", "\345\276\256\344\277\241CRM\347\273\221\345\256\232\347\216\207", 0));
        crmBandRateValueLabel->setText(QApplication::translate("TDMDetailDataForm", "85%", 0));
        titleLabel4->setText(QApplication::translate("TDMDetailDataForm", "\344\275\234\344\270\232\346\211\271\346\224\271", 0));
        correctRateLabel->setText(QApplication::translate("TDMDetailDataForm", "\350\256\242\346\255\243\347\216\207", 0));
        correctRateValueLabel->setText(QApplication::translate("TDMDetailDataForm", "20\357\274\21010%\357\274\211", 0));
        homeworkSubmitRateLabel->setText(QApplication::translate("TDMDetailDataForm", "\344\275\234\344\270\232\346\217\220\344\272\244\347\216\207", 0));
        homeworkSubmitRateValueLabel->setText(QApplication::translate("TDMDetailDataForm", "85%", 0));
        markingOvertimeLabel->setText(QApplication::translate("TDMDetailDataForm", "\350\266\205\346\227\266\346\211\271\346\224\271\351\207\217", 0));
        markingOvertimeValueLabel->setText(QApplication::translate("TDMDetailDataForm", "85", 0));
        correctResponseTimeLabel->setText(QApplication::translate("TDMDetailDataForm", "\346\211\271\346\224\271\345\223\215\345\272\224\346\227\266\351\225\277", 0));
        correctResponseTimeValueLabel->setText(QApplication::translate("TDMDetailDataForm", "85min", 0));
        correctTimeLabel->setText(QApplication::translate("TDMDetailDataForm", "\346\211\271\346\224\271\346\227\266\351\225\277", 0));
        correctTimeValueLabel->setText(QApplication::translate("TDMDetailDataForm", "120s", 0));
        titleLabel5->setText(QApplication::translate("TDMDetailDataForm", "\347\233\264\346\222\255", 0));
        attendanceRateLabel->setText(QApplication::translate("TDMDetailDataForm", "\345\255\246\347\224\237\345\207\272\345\213\244\347\216\207", 0));
        attendanceRateValueLabel->setText(QApplication::translate("TDMDetailDataForm", "85%", 0));
        broadcastLateTimesLabel->setText(QApplication::translate("TDMDetailDataForm", "\347\233\264\346\222\255\350\277\237\345\210\260\346\254\241\346\225\260", 0));
        broadcastLateTimesValueLabel->setText(QApplication::translate("TDMDetailDataForm", "5", 0));
        titleLabel6->setText(QApplication::translate("TDMDetailDataForm", "\350\264\250\346\243\200", 0));
        taskQcScoreLabel->setText(QApplication::translate("TDMDetailDataForm", "\344\275\234\344\270\232\350\264\250\346\243\200\345\276\227\345\210\206", 0));
        taskQcScoreValueLabel->setText(QApplication::translate("TDMDetailDataForm", "2.0", 0));
        taskCorrectErrorLabel->setText(QApplication::translate("TDMDetailDataForm", "\344\275\234\344\270\232\346\211\271\351\224\231\346\225\260\351\207\217", 0));
        taskCorrectErrorValueLabel->setText(QApplication::translate("TDMDetailDataForm", "8", 0));
        questionQcScoreLabel->setText(QApplication::translate("TDMDetailDataForm", "\347\255\224\347\226\221\350\264\250\346\243\200\345\276\227\345\210\206", 0));
        questionQcScoreValueLabel->setText(QApplication::translate("TDMDetailDataForm", "3.5", 0));
        questionCorrectErrorLabel->setText(QApplication::translate("TDMDetailDataForm", "\347\255\224\347\226\221\351\224\231\350\257\257\351\207\217", 0));
        questionCorrectErrorValueLabel->setText(QApplication::translate("TDMDetailDataForm", "5", 0));
    } // retranslateUi

};

namespace Ui {
    class TDMDetailDataForm: public Ui_TDMDetailDataForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDMDETAILDATAFORM_H
