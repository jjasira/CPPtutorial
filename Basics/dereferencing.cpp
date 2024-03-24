#include <string>
#include <iostream>
using namespace std;

int main()
{
    string food = "pizza";
    string *ptr = &food;

    cout << food << endl;
    cout << ptr << endl;
    // Dereference: Output the value of food with the pointer
    cout << *ptr << endl;

    // we can change the value of the pointer which will also change the value of the food variable
    *ptr = "Hamburger";

    cout << *ptr << endl;
    cout << food << endl;
}
