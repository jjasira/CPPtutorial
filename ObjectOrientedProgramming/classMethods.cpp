// you can define functions that belong to a class wither inside or outside the class
#include <iostream>
#include <string>
using namespace std;

class MyClass
{
public:
    void myFunction()
    {
        cout << "This is my function" << endl;
    }

    void myMethod(); // to define a function outside a class it should be declared inside the class.This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function:
};                   // a class definition should end with a semi-colon

// Method/function definition outside the class
void MyClass::myMethod()
{
    cout << "Hello World!" << endl;
}

int main()
{
    MyClass myObject;
    myObject.myFunction();
    myObject.myMethod();
    return 0;
}