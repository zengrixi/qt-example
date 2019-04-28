#include "listdeo.h"
#include "ui_listdeo.h"
#include <QHeaderView>

listdeo::listdeo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::listdeo)
{
    ui->setupUi(this);


    ui->list->setColumnCount(3);
   // ui->list->setRowCount(5);
    ui->list->resize(350,200);
    QStringList headers;
    headers<<"id"<<"name"<<"password";
    ui->list->setHorizontalHeaderLabels(headers);
    int a = ui->list->rowCount();
    ui->list->insertRow(a);
    ui->list->setItem(a,0,new QTableWidgetItem(QString("1")));
    //table->setItem(0,0,new QTableWidgetItem(QString(id)));
    ui->list->setItem(a,1,new QTableWidgetItem(QString("admin")));
    ui->list->setItem(a,2,new QTableWidgetItem(QString("123")));

    ui->list->insertRow(1);
    ui->list->setItem(1,0,new QTableWidgetItem(QString("2")));
    //table->setItem(0,0,new QTableWidgetItem(QString(id)));
    ui->list->setItem(1,1,new QTableWidgetItem(QString("admin")));
    ui->list->setItem(1,2,new QTableWidgetItem(QString("222")));

    //添加排序功能
    QHeaderView *headerGoods = ui->list->horizontalHeader();
    //SortIndicator为水平标题栏文字旁边的三角指示器
    headerGoods->setSortIndicator(0, Qt::AscendingOrder);
    headerGoods->setSortIndicatorShown(true);
    connect(headerGoods, SIGNAL(sectionClicked(int)), ui->list, SLOT (sortByColumn(int)));
}

listdeo::~listdeo()
{
    delete ui;
}

void listdeo::on_tianjia_clicked()
{
    ui->list->setColumnCount(3);
   // ui->list->setRowCount(5);
    ui->list->resize(350,200);
    QStringList headers;
    headers<<"id"<<"name"<<"password";
    ui->list->setHorizontalHeaderLabels(headers);
    int a = ui->list->rowCount();
    //ui->list->insertRow(a);
    //int b;
   // b=id.toInt();
    ui->list->insertRow(a);
    ui->list->setItem(a,0,new QTableWidgetItem(QString("1")));
    //table->setItem(0,0,new QTableWidgetItem(QString(id)));
    ui->list->setItem(a,1,new QTableWidgetItem(QString("admin")));
    ui->list->setItem(a,2,new QTableWidgetItem(QString("123")));

}

void listdeo::on_xiugai_clicked()
{
    QString idd=ui->id->text();//将id文本框的值赋值给变量
    QString named=ui->name->text();//将name文本框的值赋值给变量
    QString passwordd=ui->password->text();//将password文本框的值赋值给变量
    for(int i=0;i<ui->list->columnCount();i++)
            {
                //qDebug()<<(ui->list->item(ui->list->currentRow(),i)->text())<<endl;
                QString aaa=ui->list->item(ui->list->currentRow(),i)->text();
                if(i==0)
                {
                    ui->list->item(ui->list->currentRow(),i)->setText(idd);
                    //ui->list->setItem(i,0,new QTableWidgetItem(QString(idd)));
                }
                else if(i==1)
                {
                    ui->list->item(ui->list->currentRow(),i)->setText(named);
                    //ui->list->setItem(i,1,new QTableWidgetItem(QString(named)));
                }
                else if (i==2)
                {
                    ui->list->item(ui->list->currentRow(),i)->setText(passwordd);
                    //QString qwe=ui->list->item(ui->list->currentItem())->text();
                   // ui->list->setItem(i,1,new QTableWidgetItem(QString(passwordd)));
                }

            }
}

void listdeo::on_huoqu_clicked()
{
    for(int i=0;i<ui->list->columnCount();i++)
    {
        //qDebug()<<(ui->list->item(ui->list->currentRow(),i)->text())<<endl;
        QString aaa=ui->list->item(ui->list->currentRow(),i)->text();
        if(i==0)
        {
            ui->id->setText(aaa);
        }
        else if(i==1)
        {
            ui->name->setText(aaa);
        }
        else if (i==2)
        {
            //QString qwe=ui->list->item(ui->list->currentItem())->text();
            ui->password->setText(aaa);
        }

    }
}

void listdeo::on_list_itemClicked(QTableWidgetItem *item)
{
    ui->list->setSelectionBehavior(QAbstractItemView::SelectRows);
    //void QTableWidget ::cellClicked(int row,int column);
    connect(ui->list,SIGNAL(itemDoubleClicked(QTableWidgetItem*)),this,SLOT(getItem(QTreeWidgetItem*,int)));
    //QString mm=ui->list->AboveItem(1, 1)->text();
    // ui->name->setText(mm);
}

void listdeo::on_shanchu_clicked()
{
    if(ui->list->currentRow())
    {
        ui->list->removeRow(ui->list->currentRow());
    }
}

void listdeo::on_qingkong_clicked()
{
    for(;ui->list->rowCount();)
    {
        ui->list->removeRow(0);
    }
}
