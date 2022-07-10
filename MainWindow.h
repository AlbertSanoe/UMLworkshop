//
// Created by Su on 2022/7/6.
//

#ifndef UMLWORKSHOP_MAINWINDOW_H
#define UMLWORKSHOP_MAINWINDOW_H

#include <QMainWindow>

#include "Controller_Object.h"
#include "Controller_View.h"


class MainWindow:public QMainWindow{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Controller_Object* Object_Controller;
    Controller_View* View_Controller;
};

#endif //UMLWORKSHOP_MAINWINDOW_H
