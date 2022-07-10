//
// Created by Su on 2022/7/10.
//

#include "View_Turn.h"

void View_Turn::InitPushButtons() {
    m_diceButton=new QPushButton("Roll the die",this);
    m_speedDieButton=new QPushButton("Execute speeddie",this);
    m_endTurnButton=new QPushButton("End turn",this);
    m_buildHousesButton=new QPushButton("Build houses",this);
    m_getOutOfJailButton=new QPushButton("Get out of jail", this);
    m_useBusTicketButton=new QPushButton("Use Bus Ticket",this);
    m_mortgageButton = new QPushButton("Mortgage" ,this);
    m_tradeButton = new QPushButton("Trade", this);
    m_quitPlayerButton=new QPushButton("Quit",this);
    m_saveGameButton = new QPushButton("Save", this);
}

void View_Turn::InitLayout() {
    m_vLayout=new QVBoxLayout(this);
    setLayout(m_vLayout);
    //m_vLayout->addWidget(m_currentPlayerMessage);
    m_vLayout->addWidget(m_diceButton);
    m_vLayout->addWidget(m_speedDieButton);
    m_vLayout->addWidget(m_buildHousesButton);
    m_vLayout->addWidget(m_mortgageButton);
    m_vLayout->addWidget(m_tradeButton);
    m_vLayout->addWidget(m_getOutOfJailButton);
    m_vLayout->addWidget(m_useBusTicketButton);
    m_vLayout->addWidget(m_endTurnButton);
    m_vLayout->addWidget(m_quitPlayerButton);
    m_vLayout->addWidget(m_saveGameButton);

    //m_vLayout->addWidget(m_infoMessage);
}

View_Turn::View_Turn(QWidget *parent) : QWidget(parent){
    InitPushButtons();
    InitLayout();
}
