//
// Created by Su on 2022/7/7.
//

#ifndef UMLWORKSHOP_VIEW_PLAYER_H
#define UMLWORKSHOP_VIEW_PLAYER_H

#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>
#include <QMessageBox>

class View_Player : public QFrame{

Q_OBJECT

private:
    QLabel* m_playerNameLabel;
    QVBoxLayout* m_vLayout;
    QPushButton* m_viewInfoButton;
    QLabel* m_amountOfMoneyLabel;
public:
    View_Player(int Player_Number, int Player_Money,QWidget* parent = NULL);
    //~View_Player();
};

#endif //UMLWORKSHOP_VIEW_PLAYER_H
