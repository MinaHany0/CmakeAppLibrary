#include "teaCofeeLib.hpp"

bool decide_drink(int day)
{
    if(0 == day % 5 )
    {
        return true;
    }
    else 
        return false;
}