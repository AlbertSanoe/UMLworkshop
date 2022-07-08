//
// Created by Su on 2022/7/8.
//

#include "Board.h"

void Board::Set_RealEstate_Card_List() {
    QFile file("../DataFile/Data_RealEstate.txt");
    file.open(QFile::ReadOnly);
    QTextStream textStream(&file);
    while(!textStream.atEnd()){
        Card_Abstract*ptr;
        QString line =textStream.readLine();
        ptr=Factory_Card::ReturnCard(card_realEstate,line);
        this->RealEstate_Card.push_back(ptr);
    }
}

void Board::Set_Transport_Card_List() {
    QFile file("../DataFile/Data_Transport.txt");
    file.open(QFile::ReadOnly);
    QTextStream textStream(&file);
    while(!textStream.atEnd()){
        Card_Abstract*ptr;
        QString line =textStream.readLine();
        ptr=Factory_Card::ReturnCard(card_transport,line);
        this->Transport_Card.push_back(ptr);
    }
}

void Board::Set_Energy_Card_List() {
    QFile file("../DataFile/Data_Energy.txt");
    file.open(QFile::ReadOnly);
    QTextStream textStream(&file);
    while(!textStream.atEnd()){
        Card_Abstract*ptr;
        QString line =textStream.readLine();
        ptr=Factory_Card::ReturnCard(card_energy,line);
        this->Energy_Card.push_back(ptr);
    }
}

void Board::Set_Chance_Card_List() {
    QFile file("../DataFile/chanceText.txt");
    file.open(QFile::ReadOnly);
    QTextStream textStream(&file);
    while(!textStream.atEnd()){
        Card_Abstract*ptr;
        QString line =textStream.readLine();
        ptr=Factory_Card::ReturnCard(card_action,line);
        this->Chance_Card.push_back(ptr);
    }
}

void Board::Set_CommunityChest_Card_List() {
    QFile file("../DataFile/communityChestText.txt");
    file.open(QFile::ReadOnly);
    QTextStream textStream(&file);
    while(!textStream.atEnd()){
        Card_Abstract*ptr;
        QString line =textStream.readLine();
        ptr=Factory_Card::ReturnCard(card_action,line);
        this->CommunityChest_Card.push_back(ptr);
    }
}

Board::Board() {
    this->Set_RealEstate_Card_List();
    this->Set_Transport_Card_List();
    this->Set_Energy_Card_List();
    this->Set_Chance_Card_List();
    this->Set_CommunityChest_Card_List();
}