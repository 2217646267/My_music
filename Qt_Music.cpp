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

void Qt_Music::mousePressEvent(QMouseEvent* event)
{
	//获取title widget 的高度，这里固定为60px
	int titleHeight = ui.title_Widget->height();
	if (event->y() < titleHeight)
	{
		last = event->globalPos(); //获取到按压的位置
	}
}

void Qt_Music::mouseMoveEvent(QMouseEvent* event)
{
	int titleHeight = ui.title_Widget->height();
	if (event->y() < titleHeight)
	{
		int dx = event->globalX() - last.x();
		int dy = event->globalY() - last.y();
		last = event->globalPos();
		this->move(this->x() + dx, this->y() + dy);
	}
}

void Qt_Music::mouseReleaseEvent(QMouseEvent* event)
{
	int titleHeight = ui.title_Widget->height();
	if (event->y() < titleHeight)
	{
		int dx = event->globalX() - last.x();
		int dy = event->globalY() - last.y();
		this->move(this->x() + dx, this->y() + dy);
	}
}