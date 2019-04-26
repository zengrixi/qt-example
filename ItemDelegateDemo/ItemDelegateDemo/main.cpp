#include "itemdelegatedemo.h"
#include <QtWidgets/QApplication>

#include <QProcess>
#include <QDebug>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
 	ItemDelegateDemo w;
 	w.show();
	return a.exec();
}
