//
// Created by Su on 2022/7/9.
//

#ifndef UMLWORKSHOP_CONTROLLER_VIEW_H
#define UMLWORKSHOP_CONTROLLER_VIEW_H

#include "View_Board.h"
#include "Card_Abstract.h"
#include "View_Player.h"
#include "View_Turn.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QPushButton>
#include <QApplication>

class Controller_View: public QHBoxLayout{
    Q_OBJECT
private:
    View_Board* Board_View;
    QList<View_Player*> m_View_Players;
    QVBoxLayout* m_View_PlayerLayout;
    View_Turn*Turn;

public:
    explicit Controller_View(int Player_Number,Money Money_Initial,QWidget* parent);
};


#endif //UMLWORKSHOP_CONTROLLER_VIEW_H
