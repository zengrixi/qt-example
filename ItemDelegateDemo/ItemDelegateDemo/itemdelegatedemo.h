#ifndef ITEMDELEGATEDEMO_H
#define ITEMDELEGATEDEMO_H

#include <QtWidgets/QWidget>
#include "ui_itemdelegatedemo.h"

class ItemDelegateDemo : public QWidget
{
	Q_OBJECT

public:
	ItemDelegateDemo(QWidget *parent = 0);
	~ItemDelegateDemo();

private:
	Ui::ItemDelegateDemoClass ui;
};

#endif // ITEMDELEGATEDEMO_H
