#pragma once

#include <QtWidgets/QMainWindow>
#include <QMouseEvent>
#include "ui_Qt_Music.h"
#include "searchform.h"

class Qt_Music : public QMainWindow
{
	Q_OBJECT

public:
	Qt_Music(QWidget *parent = Q_NULLPTR);

protected:
	//鼠标按下
	void mousePressEvent(QMouseEvent* event);
	//鼠标移动
	void mouseMoveEvent(QMouseEvent* event);
	//鼠标释放
	void mouseReleaseEvent(QMouseEvent* event);
private:
	searchform* searchForm;  //搜索框
	QPoint last;
private:
	Ui::Qt_MusicClass ui;
};
