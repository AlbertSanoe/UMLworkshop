//
// Created by Su on 2022/7/6.
//

#include "Square_Abstract.h"

Square_Abstract::Square_Abstract(int position):Position(position){}

int Square_Abstract::GetPosition() const{
    return this->Position;
}