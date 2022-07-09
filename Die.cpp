#include "Die.h"
#include <time.h>

Die::Die()
{
    srand(time(NULL));
}

int Die::RollDie() const
{
    return GetRandomNumber();
}

int Die::GetRandomNumber()const
{
    return rand() % 6 + 1;
}
