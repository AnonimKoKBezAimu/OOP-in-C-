#ifndef Car_H 
#define Car_H

#include <string>

class Car
{
    protected:
    int wheels;
    int doors;
    std::string brand;
    
    public:
    Car();
    Car(int wheels, int doors, std::string brand);

    void SetWheels(int wheels);
    void SetDoors(int doors);
    void SetBrand(std::string brand);

    int GetWheels();
    int GetDoors();
    std::string GetBrand();
};


#endif 
