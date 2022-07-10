//
// Created by Su on 2022/7/9.
//

#include "Controller_View.h"

Controller_View::Controller_View(QWidget *parent): QHBoxLayout(parent) {


    Board_View=new View_Board(nullptr);


    m_View_PlayerLayout = new QVBoxLayout();
    addLayout(m_View_PlayerLayout);

    addWidget(Board_View);

}
