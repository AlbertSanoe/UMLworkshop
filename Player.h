//
// Created by Su on 2022/7/6.
//

#ifndef UMLWORKSHOP_PLAYER_H
#define UMLWORKSHOP_PLAYER_H

#include <QString>

typedef int Money;
typedef bool GameState;
typedef bool PrisonState;

#define Game_In true
#define Game_Over false

#define Prison_In true
#define Prison_Not_In false

#define Increase_Money true
#define Decrease_Money false

class Player{
private:
    Money Cash;
    GameState Game_State=Game_In;
    PrisonState Prison_State=Prison_Not_In;
public:
    Player(Money cash);
    void SetGameState(GameState state);
    void SetPrisonState(PrisonState state);
    void SetCash(Money m,bool setState);
    GameState ReturnGameState()const;
    PrisonState ReturnPrisonState()const;
    Money ReturnCurrentMoney()const;
};
#endif //UMLWORKSHOP_PLAYER_H
