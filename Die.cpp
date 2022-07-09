#include "Die.h"
#include <time.h>

Die::Die()
{
    srand(time(nullptr));
}

int Die::RollDie() const
{
    return GetRandomNumber();
}

int Die::GetRandomNumber(int p_min, int p_max) const
{
    return rand() % (p_max + 1 - p_min) + p_min;
}
