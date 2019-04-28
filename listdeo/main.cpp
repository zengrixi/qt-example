#include <QApplication>
#include "listdeo.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    listdeo w;
    w.show();

    return a.exec();
}
