#pragma once
#include "car.h"

class  Formula : public Car
{
    private:
    int maxSpeed;
    
    public:
    Formula();
    Formula(int wheels, int doors, std::string brand, int maxSpeed);

    void SetMaxSpeed(int maxSpeed);

    int GetMaxSpeed();
};