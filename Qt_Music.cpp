#include "Qt_Music.h"

Qt_Music::Qt_Music(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
    //首先去除自带的边框
    this->setWindowFlag(Qt::FramelessWindowHint);
    //加入过滤器
    ui.line_Search->installEventFilter(this);
    ui.line_Search->setMouseTracking(true);
    searchForm = new searchform(this); //创建一个新的搜索框
    searchForm->installEventFilter(this);
    searchForm->setMouseTracking(true);
    searchForm->hide();
    
}
