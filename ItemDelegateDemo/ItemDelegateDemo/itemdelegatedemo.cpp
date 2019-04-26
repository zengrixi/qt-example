#include "itemdelegatedemo.h"
#include "commondelegate.h"
#include "htableheaderview.h"
#include "headviewwidget.h"

#include <QTableWidget>
#include <QLineEdit>

ItemDelegateDemo::ItemDelegateDemo(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ComboboxDelegate* combobox = new ComboboxDelegate(ui.tableWidget);
	SpinBoxDelegate* spinboxDelegate = new SpinBoxDelegate(ui.tableWidget);
	LineEditDelegate* lineditDelegate = new LineEditDelegate(ui.tableWidget);
	ui.tableWidget->setItemDelegateForColumn(0, combobox);
	ui.tableWidget->setItemDelegateForColumn(1, spinboxDelegate);
	ui.tableWidget->setItemDelegateForColumn(2, lineditDelegate);

	ui.tableWidget->setRowCount(5);
	ui.tableWidget->setColumnCount(3);

	QStringList headherlist;
	headherlist << "" << "" << "";
	HTableHeaderView* hheaderview = new HTableHeaderView(ui.tableWidget);
	ui.tableWidget->setHorizontalHeaderLabels(headherlist);
	ui.tableWidget->setHorizontalHeader(hheaderview);
	ui.tableWidget->verticalHeader()->setVisible(false);

	HeadViewWidget* headwidget0 = new HeadViewWidget(ui.tableWidget);
	HeadViewWidget* headwidget1 = new HeadViewWidget(ui.tableWidget);
	HeadViewWidget* headwidget2 = new HeadViewWidget(ui.tableWidget);
	headwidget0->setColumnIsEdit(true);
	headwidget1->setColumnIsQuery(true, QString::fromLocal8Bit("¿´¿´ÓêÌï¸çµÄÆøÅÝÌáÊ¾¿òÅ¶£¡"));
	headwidget2->setColumnIsEdit(true);
	headwidget2->setColumnIsQuery(true, QString::fromLocal8Bit("ÓêÌï¸çµÄÆøÅÝÌáÊ¾¿ò¾ÍÊÇÀ÷º¦Å¶£¡"));
	headwidget0->setContentLabel(QString::fromLocal8Bit("ÓêÌï¸ç1ÁÐ"));
	headwidget1->setContentLabel(QString::fromLocal8Bit("ÓêÌï¸ç2ÁÐ"));
	headwidget2->setContentLabel(QString::fromLocal8Bit("ÓêÌï¸ç3ÁÐ"));
	hheaderview->setColumnWidget(0, headwidget0);
	hheaderview->setColumnWidget(1, headwidget1);
	hheaderview->setColumnWidget(2, headwidget2);

	for (int row = 0; row < 5; row++)
	{
		for (int column = 0; column < 3; column++)
		{
			QTableWidgetItem *columnHeaderItem = new QTableWidgetItem;
			columnHeaderItem->setText(QString("%1").arg(row + 1));
			ui.tableWidget->setItem(row, column, columnHeaderItem);
		}
	}

	connect(ui.tableWidget, &QTableWidget::cellClicked, [this](int row, int column){
		if (ui.tableWidget->itemDelegateForColumn(column))
		{
			QTableWidgetItem * item = ui.tableWidget->item(row, column);
			ui.tableWidget->editItem(item);
		}
	});
}

ItemDelegateDemo::~ItemDelegateDemo()
{

}
