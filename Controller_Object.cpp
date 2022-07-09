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

Controller_Object::Controller_Object() {
    GameBoard=new Board();
    die=new Die();
    this->InitializeBusTickets();
}
