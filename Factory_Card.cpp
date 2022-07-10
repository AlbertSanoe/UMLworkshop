//
// Created by Su on 2022/7/7.
//

#include "Factory_Card.h"

Card_Abstract*Factory_Card::ReturnCard(Card Type, const Input_Info&Info) {
    QStringList DataList=Info.split(" ");
    Card_Abstract* card_ptr;
    switch(Type){
        case card_realEstate:{
            QString name;
            if(DataList.size()==11){
                name = DataList[10];
            }
            else if(DataList.size()==13){
                name = DataList[10] + " " + DataList[11]+ " "+DataList[12];
            }
            else{
                name = DataList[10] + " " + DataList[11];
            }
            std::vector<Money> Rent = {DataList[2].toDouble(), DataList[3].toDouble(), DataList[4].toDouble(),
                                       DataList[5].toDouble(), DataList[6].toDouble(), DataList[7].toDouble(),
                                       DataList[8].toDouble()};
            std::vector<Money> Price = {DataList[0].toDouble(), DataList[1].toDouble(), DataList[1].toDouble(),
                                        DataList[1].toDouble()};
            Money Mortgage=DataList[0].toDouble()/2;
            Color color=DataList[9].toInt();
            card_ptr=new Card_RealEstate(name);
            card_ptr->SetRent(Rent);
            card_ptr->SetPrice(Price);
            card_ptr->SetMortgage(Mortgage);
            card_ptr->SetColor(color);
            break;
        }
        case card_transport:{
            QString name;
            if(DataList.size()==8){
                name =DataList[5] + " " + DataList[6]+" "+DataList[7];
            }
            else{
                name = DataList[5] + " " + DataList[6];
            }
            std::vector<Money> Rent = {DataList[1].toDouble(), DataList[2].toDouble(), DataList[3].toDouble(),
                                       DataList[4].toDouble()    };
            std::vector<Money> Price{DataList[0].toDouble()};
            Money Mortgage = DataList[0].toDouble() / 2;
            card_ptr=new Card_Transport(name);
            card_ptr->SetRent(Rent);
            card_ptr->SetPrice(Price);
            card_ptr->SetMortgage(Mortgage);
        }
        case card_energy:{
            QString name;
            if(DataList.size()==2){
                name=DataList[1];
            }
            else{
                name=DataList[1]+" "+DataList[2];
            }
            std::vector<Money>Price={DataList[0].toDouble()};
            Money Mortgage=DataList[0].toDouble()/2;
            card_ptr=new Card_Energy(name);
            //card_ptr->SetRent(RentInput);
            card_ptr->SetPrice(Price);
            card_ptr->SetMortgage(Mortgage);
        }
        case card_action:{
            auto actionType = (ActionType) DataList[0].toInt();
            int actionValue = DataList[1].toInt();
            QString text;
            for (int i = 2; i < DataList.length(); i++)
            {
                text += DataList[i] + " ";
            }
            text = text.trimmed();
            card_ptr=new Card_Abstract(text);
            card_ptr->SetActionType(actionType);
            card_ptr->SetActionValue(actionValue);
        }
        default:
            return nullptr;
    }
    return card_ptr;
}

