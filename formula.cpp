#include "formula.h"

Formula::Formula() 
    : Car()
{
    maxSpeed = 0;
}

Formula::Formula(int wheels, int doors, std::string brand, int maxSpeed) 
    : Car(wheels, doors, brand)
{
    this->maxSpeed = maxSpeed;
}

void Formula::SetMaxSpeed(int maxSpeed)
{
    this->maxSpeed = maxSpeed;
}

int Formula::GetMaxSpeed()
{
    return maxSpeed;
}