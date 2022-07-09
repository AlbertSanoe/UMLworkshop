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

int Die::GetRandomNumber()const
{
    return rand() % 6 + 1;
}
