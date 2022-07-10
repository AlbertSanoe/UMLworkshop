//
// Created by Su on 2022/7/6.
//

#ifndef UMLWORKSHOP_MAINWINDOW_H
#define UMLWORKSHOP_MAINWINDOW_H

#include <QMainWindow>

#include "Controller_Object.h"
#include "Controller_View.h"
#include "View_StartingGame.h"

class MainWindow:public QMainWindow{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    View_StartingGame* StartingGame_View;
    Controller_Object* Object_Controller;
    Controller_View* View_Controller;
};

#endif //UMLWORKSHOP_MAINWINDOW_H
