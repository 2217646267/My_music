#include "Qt_Music.h"
#include <QtWidgets/QApplication>
#include "loadfileqss.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	LoadFileQss::setStyle("./Allthe.qss"); //加载qss 样式表，用静态方式
	Qt_Music w;
	w.show();
	return a.exec();
}
