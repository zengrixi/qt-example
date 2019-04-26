#ifndef COMMONDELEGATE_H
#define COMMONDELEGATE_H

#include <QStyledItemDelegate>

//ComboboxDelegate
class ComboboxDelegate : public QStyledItemDelegate
{
	Q_OBJECT

public:
	ComboboxDelegate(QObject *parent = 0);

	QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
		const QModelIndex &index) const Q_DECL_OVERRIDE;

	void setEditorData(QWidget *editor, const QModelIndex &index) const Q_DECL_OVERRIDE;
	void setModelData(QWidget *editor, QAbstractItemModel *model,
		const QModelIndex &index) const Q_DECL_OVERRIDE;

	void updateEditorGeometry(QWidget *editor,
		const QStyleOptionViewItem &option, const QModelIndex &index) const Q_DECL_OVERRIDE;

	void paint(QPainter* painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

//SpinBoxDelegate
class SpinBoxDelegate : public QStyledItemDelegate
{
	Q_OBJECT

public:
	SpinBoxDelegate(QObject *parent = 0);

	QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
		const QModelIndex &index) const Q_DECL_OVERRIDE;

	void setEditorData(QWidget *editor, const QModelIndex &index) const Q_DECL_OVERRIDE;
	void setModelData(QWidget *editor, QAbstractItemModel *model,
		const QModelIndex &index) const Q_DECL_OVERRIDE;

	void updateEditorGeometry(QWidget *editor,
		const QStyleOptionViewItem &option, const QModelIndex &index) const Q_DECL_OVERRIDE;

	void paint(QPainter* painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

//LineEditDelegate
class LineEditDelegate : public QStyledItemDelegate
{
	Q_OBJECT

public:
	LineEditDelegate(QObject *parent = 0);

	void setLimitIntValid(qint64 min, qint64 max){ m_limitIntRange = std::make_pair(min, max); };
	void setLimitFloatValid(qreal min, qreal max, int decilas = 2){ m_limitFloatRange = std::make_pair(min, max); m_decilas = decilas; };
	void setLimitStringValid(int limit){ m_limitString = limit; };
	void setPlaceText(const QString& placeText){ m_placeTxt = placeText; };

	QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
		const QModelIndex &index) const Q_DECL_OVERRIDE;

	void setEditorData(QWidget *editor, const QModelIndex &index) const Q_DECL_OVERRIDE;
	void setModelData(QWidget *editor, QAbstractItemModel *model,
		const QModelIndex &index) const Q_DECL_OVERRIDE;

	void updateEditorGeometry(QWidget *editor,
		const QStyleOptionViewItem &option, const QModelIndex &index) const Q_DECL_OVERRIDE;

	void paint(QPainter* painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;

private:
	std::pair<qint64, qint64> m_limitIntRange;
	std::pair<qreal, qreal> m_limitFloatRange;
	int m_limitString;
	int m_decilas;
	QString m_placeTxt;
};

#endif // COMMONDELEGATE_H
