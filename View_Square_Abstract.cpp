//
// Created by Su on 2022/7/6.
//

#include "View_Square_Abstract.h"

View_Square_Abstract::View_Square_Abstract(int position): Position(position){}

int View_Square_Abstract::GetPosition() const{
    return this->Position;
}