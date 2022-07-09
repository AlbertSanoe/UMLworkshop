//
// Created by Su on 2022/7/7.
//

#include "View_Player.h"

View_Player::View_Player(int Player_Number, int Player_Money,QWidget* parent) : QFrame(parent){

    setMaximumHeight(150);
    setFrameStyle(QFrame::Panel | QFrame::Sunken);
    setLineWidth(4);

    QString playerName = "Player " + QString::number(Player_Number + 1);
    m_playerNameLabel = new QLabel(playerName, this);
    m_amountOfMoneyLabel = new QLabel("Money: $" + QString::number(Player_Money), this);
    m_viewInfoButton = new QPushButton("View info", this);

    m_vLayout = new QVBoxLayout(this);
    setLayout(m_vLayout);
    m_vLayout->addWidget(m_playerNameLabel);
    m_vLayout->addWidget(m_amountOfMoneyLabel);
    m_vLayout->addWidget(m_viewInfoButton);

}
