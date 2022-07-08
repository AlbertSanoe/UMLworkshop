//
// Created by Su on 2022/7/6.
//

#include "Card_RealEstate.h"

Card_RealEstate::Card_RealEstate(QString name) : Card_Industry_Abstract(name) {}

void Card_RealEstate::SetColor(Color c){
    this->StreetColor=c;
}

void Card_RealEstate::SetRent(const vector<Money>&RentInput) {
    size_t length=RentInput.size();
    if(length==7){
        for(int i=0;i<length;i++){
            this->Rent[i]=RentInput[i];
        }
    }
}

void Card_RealEstate::SetPrice(const vector<Money>&PriceInput) {
    size_t length=PriceInput.size();
    if(length==4){
        for(int i=0;i<length;i++){
            this->Purchase[i]=PriceInput[i];
        }
    }
}

void Card_RealEstate::SetMortgage(Money M) {
    this->Land_Mortgage_Value=M;
    this->MortgagePayback=M*1.1;
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

Money Card_RealEstate::ReturnMortgagePayback() const {
    return this->MortgagePayback;
}