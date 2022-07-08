//
// Created by Su on 2022/7/8.
//

#ifndef UMLWORKSHOP_CONTROLLER_OBJECT_H
#define UMLWORKSHOP_CONTROLLER_OBJECT_H

#include "Board.h"
#include "Player.h"

class Controller_Object{
private:
    Player* CurrentPlayer;
    QList<Player*>Players;
    Board* GameBoard;


};

#endif //UMLWORKSHOP_CONTROLLER_OBJECT_H
