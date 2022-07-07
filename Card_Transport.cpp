//
// Created by Su on 2022/7/7.
//

#include "Card_Transport.h"

Card_Transport::Card_Transport(QString name):Card_Industry_Abstract(name){}

void Card_Transport::SetRent(Money r1, Money r2, Money r3, Money r4) {
    this->Rent[0]=r1;
    this->Rent[1]=r2;
    this->Rent[2]=r3;
    this->Rent[3]=r4;
}

void Card_Transport::SetPrice(int p) {
    this->Price=p;
}

void Card_Transport::SetMortgage(int m) {
    this->Land_Mortgage_Value=m;
}

Money Card_Transport::ReturnCurrentRent(int Status, int Signal) const {
    Money *money;
    switch(Status){
        case has_1_gare:
            money=this->Has_One_Gare;
            break;
        case has_2_gare:
            money=this->Has_Two_Gare;
            break;
        case has_3_gare:
            money=this->Has_Three_Gare;
            break;
        case has_4_gare:
            money=this->Has_Four_Gare;
            break;
        default:
            return 0;
    }
    switch(Signal){
        case Signal_Basic:
            break;
        case Signal_Upgrade:
            *money=2*(*money);
            break;
        default:
            return 0;
    }
    return *money;
}

Money Card_Transport::ReturnCurrentPrice(int Status) const {
    return this->Price;
}//Status is not necessary

Money Card_Transport::ReturnMortgage() const {
    return this->Land_Mortgage_Value;
}