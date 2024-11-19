#include <iostream>
#include "car.h"
#include "formula.h"

int main()
{
    Car car(4, 5, "Audi");
    Formula formula(4, 2, "Mercedes", 300);

    std::cout << formula.GetBrand() << '\t' << formula.GetMaxSpeed() << '\n';
    std::cout << car.GetBrand();
}