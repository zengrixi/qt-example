#include "downarrorwtip.h"

#include <QStyleOption>
#include <QPainter>

DownArrorwTip::DownArrorwTip()
	: QMenu(nullptr)
{
	setWindowFlags(Qt::Tool | Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);
	setStyleSheet("QMenu{margin-top:4px;border-image:url(:/ItemDelegateDemo/Resources/tiprect.png);border-width:12px;}\
				  QMenu::separator {background: #f6f6f6;height: 1px;}\
				  QMenu::item {font-size: 12px;color: #666666;\
				  background-color:red;border-style:solid;\
				  border-width:0px;padding:8px;height:14px;}\
				  QMenu::item:selected {background-color:#f6f6f6;color:#00a1ff;}\
				  QMenu::item:!enabled {background-color:#ffffff;color:#999999;}\
				");
}

DownArrorwTip::~DownArrorwTip()
{

}

void DownArrorwTip::leaveEvent(QEvent *e)
{
	emit moveOut();
	return QMenu::leaveEvent(e);
}

void DownArrorwTip::showAndRaise()
{
	show();
	raise();
}

void DownArrorwTip::paintEvent(QPaintEvent *event)
{
	QMenu::paintEvent(event);
	QStyleOption opt;
	opt.init(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
	p.save();
	QPixmap arrow(":/ItemDelegateDemo/Resources/tiparrow.png");
	p.drawPixmap((width() - arrow.width())/2, height() - arrow.height() + 4, 10, 10, arrow);
	p.restore();
}
