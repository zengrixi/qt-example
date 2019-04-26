#include "headviewwidget.h"
#include "downarrorwtip.h"

#include <QEvent>
#include <QDebug>
#include <QWidgetAction>

HeadViewWidget::HeadViewWidget(QWidget *parent)
	: QWidget(parent)
	, m_tip(nullptr)
{
	ui.setupUi(this);
	ui.queryLabel->installEventFilter(this);
	ui.editLabel->setVisible(false);
	ui.queryLabel->setVisible(false);
}

HeadViewWidget::~HeadViewWidget()
{
	if (m_tip)
	{
		delete m_tip;
		m_tip = nullptr;
	}
}

void HeadViewWidget::setContentLabel(const QString& qstring)
{
	ui.contentLabel->setText(qstring);
}

void HeadViewWidget::setColumnIsEdit(bool isedit)
{ 
	ui.editLabel->setVisible(isedit);
}

void HeadViewWidget::setColumnIsQuery(bool isquery, const QString& tips)
{ 
	ui.queryLabel->setVisible(isquery);
	if (isquery && m_tip == nullptr)
	{
		m_tip = new DownArrorwTip;
		QWidgetAction* tipAction = new QWidgetAction(this);
		QLabel* label = new QLabel(m_tip);
		label->setFixedWidth(124);
		label->setText(QString("<p style='font-size:12px;color:#666666;line-height: 18px;'>%1</p>").arg(tips));
		label->setWordWrap(true);
		tipAction->setDefaultWidget(label);
		m_tip->addAction(tipAction);
		connect(m_tip, &DownArrorwTip::moveOut, [this](){
			m_tip->hide();
		});
	}
}

bool HeadViewWidget::eventFilter(QObject *watched, QEvent *event)
{
	if (watched == ui.queryLabel)
	{
		if (event->type() == QEvent::Enter)
		{
			if (m_tip)
			{
				QPoint point = ui.queryLabel->mapToGlobal(QPoint(0, 0));
				m_tip->move(point.x() - 66, point.y() - 64);
				m_tip->showAndRaise();
			}
		}
		else if (event->type() == QEvent::Leave)
		{
			if (m_tip)
			{
				m_tip->hide();
			}
		}
	}
	return QWidget::eventFilter(watched, event);
}
