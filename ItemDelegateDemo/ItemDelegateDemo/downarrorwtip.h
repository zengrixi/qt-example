#ifndef DOWNARRORWTIP_H
#define DOWNARRORWTIP_H

#include <QMenu>

class DownArrorwTip : public QMenu
{
	Q_OBJECT

public:
	DownArrorwTip();
	~DownArrorwTip();

public:
	bool mouseIsIn();
	void showAndRaise();

signals:
	void moveOut();

protected:
	void paintEvent(QPaintEvent *event);
	void leaveEvent(QEvent *event);

private:
};

#endif // DOWNARRORWTIP_H
