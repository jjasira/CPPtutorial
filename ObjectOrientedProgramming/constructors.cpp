// To create a constructor, use the same name as the class, followed by parentheses
#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;
    // Constructor
    Car(string x, string y, int z)
    {
        brand = x;
        model = y;
        year = z;
    }
};

int main()
{
    Car myObj("BMW", "Volvo", 1998); // Create an object of MyClass (this will call the constructor)
    return 0;
}

//  The constructor has the same name as the class, it is always public, and it does not have any return value.
// Just like functions, constructors can also be defined outside the class. First, declare the constructor inside the class, and then define it outside of the class by specifying the name of the class, followed by the scope resolution :: operator, followed by the name of the constructor (which is the same as the class):