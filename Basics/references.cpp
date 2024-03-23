#include <string>
#include <iostream>
using namespace std;

int main()
{
    // A reference variable is a "reference" to an existing variable, and it is created with the & operator:
    string food = "pizza";
    string &meal = food;
    cout << food << "\n";
    cout << meal << "\n";

    // we can also use "&" to get the memory address as follows

    cout << &food << "\n";
    return 0;
}
