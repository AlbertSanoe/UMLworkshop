//
// Created by Wang on 2022/7/9.
//

#ifndef DIE_H
#define DIE_H
#include <QtGlobal>

class Die
{
public:
    Die();
    /**
     * @brief RollDie gives an integer between 1 and 6
     * @return returns the integer the die rolled
     */
    int RollDie() const;

    /**
     * @brief GetRandomNumber gives back a random integer
     * @return returns the random integer
     */
    int GetRandomNumber(int p_min, int p_max) const;
};

#endif // DIE_H
