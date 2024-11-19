#include "car.h"

Car::Car()
{
    wheels = 4;
    doors = 5;
    brand = "None";
}

Car::Car(int wheels, int doors, std::string brand)
{
    this->wheels = wheels;
    this->doors = doors;
    this->brand = brand;
}

void Car::SetWheels(int wheels)
{
    this->wheels = wheels;
}
void Car::SetDoors(int doors)
{
    this->doors = doors;
}
void Car::SetBrand(std::string brand)
{
    this->brand = brand;
}

int Car::GetWheels()
{
    return wheels;
}
int Car::GetDoors()
{
    return doors;
}
std::string Car::GetBrand()
{
    return brand;
}