//
// Created by Su on 2022/7/9.
//

#ifndef UMLWORKSHOP_CONTROLLER_VIEW_H
#define UMLWORKSHOP_CONTROLLER_VIEW_H

#include "View_Board.h"
#include "View_StartingGame.h"
#include "View_Player.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QPushButton>
#include <QApplication>

class Controller_View: public QHBoxLayout{
    Q_OBJECT
private:
    View_Board* Board_View;
    View_Square_Start*Start_View;
    QList<View_Player*> m_View_Players;
    QVBoxLayout* m_View_PlayerLayout;

public:
    Controller_View(QWidget* parent);
};


#endif //UMLWORKSHOP_CONTROLLER_VIEW_H
