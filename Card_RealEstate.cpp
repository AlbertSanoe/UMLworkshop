//
// Created by Su on 2022/7/6.
//

#include "Card_RealEstate.h"

Card_RealEstate::Card_RealEstate(QString name) : Card_Industry_Abstract(name) {}

void Card_RealEstate::SetColor(Color c){
    this->StreetColor=c;
}

void Card_RealEstate::SetRent(int r1, int r2, int r3, int r4, int r5, int r6, int r7) {
    this->Rent[0]=r1;
    this->Rent[1]=r2;
    this->Rent[2]=r3;
    this->Rent[3]=r4;
    this->Rent[4]=r5;
    this->Rent[5]=r6;
    this->Rent[6]=r7;
}

void Card_RealEstate::SetPurchase(int p1, int p2, int p3, int p4) {
    this->Purchase[0]=p1;
    this->Purchase[1]=p2;
    this->Purchase[2]=p3;
    this->Purchase[3]=p4;
}

void Card_RealEstate::SetMortgage(int M) {
    this->Land_Mortgage_Value=M;
}

Color Card_RealEstate::ReturnColor()const {
    return this->StreetColor;
}

Money Card_RealEstate::ReturnCurrentRent(int Status,int Signal) const{
    Money*money;
    switch(Status){
        case rent_bareGround:
            money=this->Rent_BareGround;
            break;
        case rent_1_house:
            money=this->Rent_1_House;
            break;
        case rent_2_houses:
            money=this->Rent_2_Houses;
            break;
        case rent_3_houses:
            money=this->Rent_3_Houses;
            break;
        case rent_4_houses:
            money=this->Rent_4_Houses;
            break;
        case rent_hotel:
            money=this->Rent_Hotel;
            break;
        case rent_skyscraper:
            money=this->Rent_Skyscraper;
            break;
        default:
            return 0;
    }
    switch(Signal){
        case signal_basic:
            break;
        case signal_all_in_one_color:
            *money=2*(*money);
            break;
        case signal_all_land:
            *money=3*(*money);
            break;
        default:
            return 0;
    }
    return *money;
}

Money Card_RealEstate::ReturnCurrentPrice(int Status) const{
    Money*money;
    switch(Status){
        case buy_land:
            money=this->Price_Land;
            break;
        case buy_house:
            money=this->Price_House;
            break;
        case buy_hotel:
            money=this->Price_Hotel;
            break;
        case buy_skyscraper:
            money=this->Price_Skyscraper;
            break;
        default:
            return 0;
    }
    return *money;
}

Money Card_RealEstate::ReturnMortgage()const {
    return this->Land_Mortgage_Value;
}