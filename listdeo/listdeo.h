#ifndef LISTDEO_H
#define LISTDEO_H

#include <QWidget>
#include <QModelIndex>
#include <QPixmap>
#include <QSize>
#include <QtGui>

#include <QTableWidgetItem>


namespace Ui {
    class listdeo;
}

class listdeo : public QWidget
{
    Q_OBJECT

public:
    explicit listdeo(QWidget *parent = 0);
    ~listdeo();

private slots:
    void on_tianjia_clicked();

    void on_xiugai_clicked();

    void on_huoqu_clicked();

    void on_list_itemClicked(QTableWidgetItem *item);

    void on_shanchu_clicked();

    void on_qingkong_clicked();

private:
    Ui::listdeo *ui;
};

#endif // LISTDEO_H
