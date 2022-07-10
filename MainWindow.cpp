//
// Created by Su on 2022/7/6.
//

#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent){
    this->setMinimumSize(800, 500);
    this->resize(1400, 1000);

    auto * wdg = new QWidget(this);

    this->StartingGame_View=new View_StartingGame;
    StartingGame_View->exec();

//    if (StartingGame_View->LoadFileSelected()){
//
//        //QString fileName = StartingGame_View->GetLoadFile();
//        //Controller_Object->ReadFromFile(fileName);
//
//    }
//    else{
//        this->Object_Controller= new Controller_Object(StartingGame_View->GetSelectedValue());
//    }

    this->Object_Controller= new Controller_Object(StartingGame_View->GetSelectedValue());

    this->View_Controller = new Controller_View(StartingGame_View->GetSelectedValue(),Controller_Object::ReturnMoneyAtFirst(),wdg);

    setCentralWidget(wdg);


}

MainWindow::~MainWindow(){

}
