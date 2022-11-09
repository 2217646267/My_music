#include "Qt_Music.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Qt_Music w;
	w.show();
	return a.exec();
}
