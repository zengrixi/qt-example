#include "htableheaderview.h"

#include <QPainter>

HTableHeaderView::HTableHeaderView(QWidget *parent)
	: QHeaderView(Qt::Horizontal, parent)
{
	setFixedHeight(40);
	setSectionResizeMode(QHeaderView::Stretch);
	setHighlightSections(false);
	setStretchLastSection(true);
	setDefaultAlignment(Qt::AlignLeft | Qt::AlignVCenter);
	setStyleSheet("QHeaderView::section {padding-left: 4px;}");
}

HTableHeaderView::~HTableHeaderView()
{

}

void HTableHeaderView::setColumnWidget(int column, QWidget* widget)
{
	m_columnWidgetMap.insert(column, widget);
	update(model()->index(0, column));
}

void HTableHeaderView::paintSection(QPainter *painter, const QRect &rect, int logicalIndex) const
{
	painter->save();
	QHeaderView::paintSection(painter, rect, logicalIndex);
	if (m_columnWidgetMap.contains(logicalIndex))
	{
		QWidget* widget = m_columnWidgetMap.value(logicalIndex);
		QRect newRect(rect.x() + 6, rect.y() + 6, rect.width() - 12, rect.height() - 12);
		widget->setGeometry(newRect);
	}
	painter->restore();
}
