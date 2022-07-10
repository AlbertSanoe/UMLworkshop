//
// Created by Su on 2022/7/9.
//

#include "Controller_View.h"

Controller_View::Controller_View(int Player_Number,Money Money_Initial, QWidget *parent): QHBoxLayout(parent) {


    Board_View=new View_Board(nullptr);


    m_View_PlayerLayout = new QVBoxLayout();
    addLayout(m_View_PlayerLayout);

    for(int i=0;i<Player_Number;i++){
        this->m_View_Players.append(new View_Player(i, Money_Initial, nullptr));
        this->m_View_PlayerLayout->addWidget(m_View_Players.last());
        this->Board_View->InitPiece(i,0);
    }

    addWidget(Board_View);

}
