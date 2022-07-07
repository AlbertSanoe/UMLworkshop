//
// Created by Su on 2022/7/7.
//

#include "Factory_Card.h"

Card_Industry_Abstract*Factory_Card::CardInitialize(Card Type, NAME name, const vector<Money> &RentInput,
                                                    const vector<Money> &PriceInput, Money m) {
    Card_Industry_Abstract* card_ptr;
    switch(Type){
        case card_realEstate:
            card_ptr=new Card_RealEstate(name);
            card_ptr->SetRent(RentInput);
            card_ptr->SetPrice(PriceInput);
            card_ptr->SetMortgage(m);
            break;
        case card_transport:
            card_ptr=new Card_Transport(name);
            card_ptr->SetRent(RentInput);
            card_ptr->SetPrice(PriceInput);
            card_ptr->SetMortgage(m);
        case card_energy:
            card_ptr=new Card_Energy(name);
            card_ptr->SetRent(RentInput);
            card_ptr->SetPrice(PriceInput);
            card_ptr->SetMortgage(m);
        default:
            return nullptr;
    }
    return card_ptr;
}

Card_Industry_Abstract* Factory_Card::ReturnCard(Card&Type,const Input_Info& Info) {
    return nullptr;
}