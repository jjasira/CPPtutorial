#include <iostream>
#include <string>
using namespace std;

class MyClass
{
public: // Access specifier
    // variables declared inside a class are called attributes.
    int myNum;
    string myString;
};

int main()
{
    MyClass myObject;
    myObject.myNum = 15;
    myObject.myString = "James";
    return 0;
}