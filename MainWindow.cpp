//
// Created by Su on 2022/7/6.
//

#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent){
    this->setMinimumSize(800, 500);
    this->resize(1400, 900);

    auto * wdg = new QWidget(this);
    setCentralWidget(wdg);

    this->Object_Controller= new Controller_Object();
    this->View_Controller = new Controller_View(wdg);
}

MainWindow::~MainWindow(){

}
