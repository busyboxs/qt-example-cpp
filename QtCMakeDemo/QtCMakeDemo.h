#pragma once

#include <QtWidgets/QWidget>
#include "ui_QtCMakeDemo.h"

class QtCMakeDemo : public QWidget
{
    Q_OBJECT

public:
    QtCMakeDemo(QWidget *parent = nullptr);
    ~QtCMakeDemo();

private:
    Ui::QtCMakeDemoClass ui;
};
