#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Qt_Music.h"

class Qt_Music : public QMainWindow
{
	Q_OBJECT

public:
	Qt_Music(QWidget *parent = Q_NULLPTR);

private:
	Ui::Qt_MusicClass ui;
};
