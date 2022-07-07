//
// Created by Su on 2022/7/7.
//

#include "Card_Transport.h"

Card_Transport::Card_Transport(QString name):Card_Industry_Abstract(name){}

void Card_Transport::SetRent(const std::vector<Money>&RentInput) {
    size_t length=RentInput.size();
    if(length==4){
        for(int i=0;i<length;i++){
            this->Rent[i]=RentInput[i];
        }
    }
}

void Card_Transport::SetPrice(const std::vector<Money>&PriceInput) {
    size_t length=PriceInput.size();
    if(length==1){
        this->Price=PriceInput[0];
    }
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