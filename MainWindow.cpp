//
// Created by Su on 2022/7/6.
//

#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent){
    this->setMinimumSize(800, 500);
    this->resize(1400, 1000);

    auto * wdg = new QWidget(this);

    this->Object_Controller= new Controller_Object();
    this->StartingGame_View=new View_StartingGame;
    StartingGame_View->exec();
    this->View_Controller = new Controller_View(wdg);

    setCentralWidget(wdg);


}

MainWindow::~MainWindow(){

}
