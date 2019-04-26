#ifndef HEADVIEWWIDGET_H
#define HEADVIEWWIDGET_H

#include <QWidget>
#include "ui_headviewwidget.h"

class DownArrorwTip;
class HeadViewWidget : public QWidget
{
	Q_OBJECT

public:
	HeadViewWidget(QWidget *parent = 0);
	~HeadViewWidget();

public:
	void setColumnIsEdit(bool isedit);
	void setColumnIsQuery(bool isquery, const QString& tips = "");
	void setContentLabel(const QString& qstring);

protected:
	bool eventFilter(QObject *watched, QEvent *event);

private:
	Ui::HeadViewWidget ui;
	DownArrorwTip* m_tip;
};

#endif // HEADVIEWWIDGET_H
