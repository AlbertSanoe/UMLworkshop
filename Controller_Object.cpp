//
// Created by Su on 2022/7/8.
//

#include "Controller_Object.h"

void Controller_Object::InitializeBusTickets()
{
    for(int i=0;i<NUMBER_OF_BUSTICKETS;i++)
    {
        Tickets.append(new BusTicket());
    }
    QList<int> places;
    places << 0 << 0 <<0;
    // while all places are different
    while(places[0]==places[1] || places[1]==places[2])
    {
        places.clear();
        places<< die->GetRandomNumber(1,NUMBER_OF_BUSTICKETS-1) << die->GetRandomNumber(1,NUMBER_OF_BUSTICKETS-1) << die->GetRandomNumber(1,NUMBER_OF_BUSTICKETS-1);
    }
    for(int i=0;i<3;i++)
        Tickets[places[i]]->SetLabeled(true);
}

void Controller_Object::InitializePlayers(int Player_Number) {
    for(int i=0;i<Player_Number;i++)
    {
        Players.append(new Player(i));
        Players[i]->SetPlayerPosition(0);
        Players[i]->SetGameState(Game_In);
        Players[i]->SetPrisonState(Prison_Not_In);
        Players[i]->SetCash(Money_At_first,Increase_Money);
    }
    CurrentPlayer=Players[0];
}

Controller_Object::Controller_Object(int Player_Number) {
    GameBoard=new Board();
    die=new Die();
    this->InitializeBusTickets();
    this->InitializePlayers(Player_Number);
}

Money Controller_Object::ReturnMoneyAtFirst() {
    return (Money)Money_At_first;
}
