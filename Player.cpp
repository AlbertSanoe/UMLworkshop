//
// Created by Su on 2022/7/6.
//

#include "Player.h"

Player::Player(Money cash) {
    this->Cash=cash;
}

void Player::SetGameState(GameState state) {
    this->Game_State=state;
}

void Player::SetPrisonState(PrisonState state) {
    this->Prison_State=state;
}

void Player::SetCash(Money m, bool setState) {
    if(setState==Increase_Money){
        this->Cash+=m;
    }
    else{
        this->Cash-=m;
    }
}

Money Player::ReturnCurrentMoney() const {
    return this->Cash;
}

GameState Player::ReturnGameState() const {
    return this->Game_State;
}

PrisonState Player::ReturnPrisonState()const{
    return this->Prison_State;
}
