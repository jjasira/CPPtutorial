/*
derived class (child) - the class that inherits from another class
base class (parent) - the class being inherited from
To inherit from a class, use the : symbol.
*/

#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle
{
public:
    string brand = "Ford";
    void honk()
    {
        cout << "Tuut, tuut! \n";
    }
};

// Derived class
class Car : public Vehicle
{
public:
    string model = "Mustang";
};

int main()
{
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model;
    return 0;
}

/*
Multilevel Inheritance
A class can also be derived from one class, which is already derived from another class.
*/

/*
Multiple Inheritance
A class can also be derived from more than one base class, using a comma-separated list:
*/