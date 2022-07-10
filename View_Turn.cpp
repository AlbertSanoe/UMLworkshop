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
    m_vLayout->addWidget(m_currentPlayerMessage);
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

    m_vLayout->addWidget(m_infoMessage);
}

void View_Turn::FillInfoMessageWithNotifications()
{
    // first deleting the redundant messages
    while(m_notificationCenter.length()>MAX_NOTIFICATIONS)
        m_notificationCenter.dequeue();

    // making one large QString of all the messages separates by double newline
    QString TotalText;
    int i=m_notificationCenter.length()-1;
    while(i>=0 && !m_notificationCenter[i].isEmpty())
    {
        TotalText+=m_notificationCenter[i];
        TotalText+="\n\n";
        i--;
    }
    m_infoMessage->setText(TotalText);
}

void View_Turn::AddMessageToNotifications(const QString& p_message,int Current_Player_ID)
{
    // add player number before message
    QString text;
    text+="Player "+QString::number( Current_Player_ID+ 1)+":\n";
    text+=p_message;
    // add message to the queue
    m_notificationCenter.enqueue(text);

    FillInfoMessageWithNotifications();
}

View_Turn::View_Turn(QWidget *parent) : QWidget(parent){
    InitPushButtons();

    m_infoMessage= new QLabel;
    m_currentPlayerMessage= new QLabel("Turn: Player 1",this);


    InitLayout();
    AddMessageToNotifications("Welcome to Monopoly\nThis is the notification center",0);
}
