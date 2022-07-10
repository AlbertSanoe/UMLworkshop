//
// Created by Su on 2022/7/8.
//

#ifndef UMLWORKSHOP_CONTROLLER_OBJECT_H
#define UMLWORKSHOP_CONTROLLER_OBJECT_H

#include "Board.h"
#include "Player.h"
#include "Die.h"
#include "Busticket.h"

#include<QQueue>
#include<QList>

#define Money_At_first 2500

class Controller_Object{
private:
    Player* CurrentPlayer= nullptr;
    QList<Player*>Players={};
    QQueue<BusTicket*>Tickets;
    Board* GameBoard;
    Die*die;

    void InitializeBusTickets();
    void InitializePlayers(int Player_Number);

public:
    const int MAX_NUMBER_PLAYERS=8;
    const int NUMBER_OF_SPACES=52;
    const int NUMBER_OF_BUSTICKETS=16;
    const int RIGHT_LOW_CORNER=53; // we see the first corner as the last so number of spaces +1
    const int LEFT_LOW_CORNER=13;
    const int LEFT_UP_CORNER=26;
    const int RIGHT_UP_CORNER=39;

    static Money ReturnMoneyAtFirst();

    explicit Controller_Object(int Player_Number);

};

#endif //UMLWORKSHOP_CONTROLLER_OBJECT_H
