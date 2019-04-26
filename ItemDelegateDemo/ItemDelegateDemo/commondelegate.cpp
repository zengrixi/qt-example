#include "commondelegate.h"

#include <QSpinBox>
#include <QLineEdit>
#include <QComboBox>
#include <QIntValidator>

class CusDoubleValidator : public QDoubleValidator
{
public:
	explicit CusDoubleValidator(QObject * parent = 0)
		:QDoubleValidator(parent){

	}
	State validate(QString &str, int &i) const{
		Q_UNUSED(i);
		if (str.isEmpty()){
			return QValidator::Intermediate;
		}

		bool cOK = false;
		double val = str.toDouble(&cOK);

		if (!cOK){
			return QValidator::Invalid;
		}

		int dotPos = str.indexOf(".");
		if (dotPos > 0){
			if (str.right(str.length() - dotPos - 1).length() > decimals()){
				return QValidator::Invalid;
			}
		}

		if (val <= top() && val >= bottom()){
			return QValidator::Acceptable;
		}
		return QValidator::Invalid;
	}
};

//ComboboxDelegate
ComboboxDelegate::ComboboxDelegate(QObject *parent)
	: QStyledItemDelegate(parent)
{
}

QWidget *ComboboxDelegate::createEditor(QWidget *parent,
	const QStyleOptionViewItem &/* option */,
	const QModelIndex &/* index */) const
{
	QComboBox* editor = new QComboBox(parent);
	editor->addItem(QString::fromLocal8Bit("ÓêÌï¸ç1ºÅ"));
	editor->addItem(QString::fromLocal8Bit("ÓêÌï¸ç2ºÅ"));
	editor->addItem(QString::fromLocal8Bit("ÓêÌï¸ç3ºÅ"));
	editor->setCurrentIndex(0);
	return editor;
}

void ComboboxDelegate::setEditorData(QWidget *editor,
	const QModelIndex &index) const
{
	QString value = index.model()->data(index, Qt::EditRole).toString();

	QComboBox *combobox = static_cast<QComboBox*>(editor);
	combobox->setCurrentText(value);
}

void ComboboxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,
	const QModelIndex &index) const
{
	QComboBox *combobox = static_cast<QComboBox*>(editor);
	QString value = combobox->currentText();

	model->setData(index, value, Qt::EditRole);
}

void ComboboxDelegate::updateEditorGeometry(QWidget *editor,
	const QStyleOptionViewItem &option, const QModelIndex &/* index */) const
{
	editor->setGeometry(option.rect);
}

void ComboboxDelegate::paint(QPainter* painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
	QStyleOptionViewItem itemOptin(option);
	if (itemOptin.state & QStyle::State_HasFocus)
		itemOptin.state = itemOptin.state ^ QStyle::State_HasFocus;
	return QStyledItemDelegate::paint(painter, itemOptin, index);
};

//SpinBoxDelegate
SpinBoxDelegate::SpinBoxDelegate(QObject *parent)
	: QStyledItemDelegate(parent)
{
}

QWidget *SpinBoxDelegate::createEditor(QWidget *parent,
	const QStyleOptionViewItem &/* option */,
	const QModelIndex &/* index */) const
{
	QSpinBox *editor = new QSpinBox(parent);
	editor->setFrame(false);
	editor->setMinimum(0);
	editor->setMaximum(100);

	return editor;
}

void SpinBoxDelegate::setEditorData(QWidget *editor,
	const QModelIndex &index) const
{
	int value = index.model()->data(index, Qt::EditRole).toInt();

	QSpinBox *spinBox = static_cast<QSpinBox*>(editor);
	spinBox->setValue(value);
}

void SpinBoxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,
	const QModelIndex &index) const
{
	QSpinBox *spinBox = static_cast<QSpinBox*>(editor);
	spinBox->interpretText();
	int value = spinBox->value();

	model->setData(index, value, Qt::EditRole);
}

void SpinBoxDelegate::updateEditorGeometry(QWidget *editor,
	const QStyleOptionViewItem &option, const QModelIndex &/* index */) const
{
	editor->setGeometry(option.rect);
}

void SpinBoxDelegate::paint(QPainter* painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
	QStyleOptionViewItem itemOptin(option);
	if (itemOptin.state & QStyle::State_HasFocus)
		itemOptin.state = itemOptin.state ^ QStyle::State_HasFocus;
	return QStyledItemDelegate::paint(painter, itemOptin, index);
};

//LineEditDelegate
LineEditDelegate::LineEditDelegate(QObject *parent)
	: QStyledItemDelegate(parent)
	, m_limitString(-1)
	, m_placeTxt("")
	, m_decilas(2)
{
	m_limitIntRange = std::make_pair(-1, -1);
	m_limitFloatRange = std::make_pair(-1, -1);
}

QWidget *LineEditDelegate::createEditor(QWidget *parent,
	const QStyleOptionViewItem &/* option */,
	const QModelIndex &/* index */) const
{
	QLineEdit *editor = new QLineEdit(parent);
	editor->setStyleSheet("QLineEdit{border: 1px solid #DDDDDD;color:#666666;font-size:12px;}");
	if (!m_placeTxt.isEmpty())
		editor->setPlaceholderText(m_placeTxt);
	QValidator *validator = nullptr;
	if (m_limitIntRange.first != -1){
		validator = new QIntValidator(m_limitIntRange.first, m_limitIntRange.second, editor);
		editor->setValidator(validator);
	}
	else if (m_limitFloatRange.first != -1){
		CusDoubleValidator* validator0 = new CusDoubleValidator(editor);
		validator0->setRange(m_limitFloatRange.first, m_limitFloatRange.second, m_decilas);
		editor->setValidator(validator0);
	}
	if (m_limitString != -1){
		editor->setMaxLength(m_limitString);
	}
	return editor;
}

void LineEditDelegate::setEditorData(QWidget *editor,
	const QModelIndex &index) const
{
	QString value = index.model()->data(index, Qt::EditRole).toString();

	QLineEdit *linedit = static_cast<QLineEdit*>(editor);
	linedit->setText(value);
}

void LineEditDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,
	const QModelIndex &index) const
{
	QLineEdit *linedit = static_cast<QLineEdit*>(editor);
	QString value = linedit->text();

	model->setData(index, value, Qt::EditRole);
}

void LineEditDelegate::updateEditorGeometry(QWidget *editor,
	const QStyleOptionViewItem &option, const QModelIndex &/* index */) const
{
	editor->setGeometry(option.rect);
}

void LineEditDelegate::paint(QPainter* painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
	QStyleOptionViewItem itemOptin(option);
	if (itemOptin.state & QStyle::State_HasFocus)
		itemOptin.state = itemOptin.state ^ QStyle::State_HasFocus;
	return QStyledItemDelegate::paint(painter, itemOptin, index);
};