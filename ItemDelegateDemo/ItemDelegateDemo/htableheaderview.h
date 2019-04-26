#ifndef HTABLEHEADERVIEW_H
#define HTABLEHEADERVIEW_H

#include <QHeaderView>

class HTableHeaderView : public QHeaderView
{
	Q_OBJECT

public:
	HTableHeaderView(QWidget *parent);
	~HTableHeaderView();

public:
	void setColumnWidget(int column, QWidget* widget);

private:
	void paintSection(QPainter *painter, const QRect &rect, int logicalIndex) const;

private:
	QMap<int, QWidget*> m_columnWidgetMap;
};

#endif // HTABLEHEADERVIEW_H
