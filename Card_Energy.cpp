//
// Created by Su on 2022/7/7.
//

#include "Card_Energy.h"

Card_Energy::Card_Energy(QString name): Card_Industry_Abstract(name) {}

void Card_Energy::SetPrice(const vector<Money>&PriceInput) {
    size_t length=PriceInput.size();
    if(length==1){
        this->Price=PriceInput[0];
    }
}

void Card_Energy::SetMortgage(Money m) {
    this->Land_Mortgage_Value=m;
}

Money Card_Energy::ReturnCurrentRent(int Status,int Signal)const{
    auto money=(Money)Signal;
    switch(Status){
        case One_Company:
            money=4*money;
            break;
        case Two_Company:
            money=10*money;
            break;
        case Three_Company:
            money=20*money;
            break;
        default:
            return 0;
    }
    return money;
}

Money Card_Energy::ReturnCurrentPrice(int Status) const {
    return this->Price;
}

Money Card_Energy::ReturnMortgage() const {
    return this->Land_Mortgage_Value;
}