// multiple functions can have the same name and different parameters
#include <iostream>
using namespace std;

// instead of definiting two function that do the same thing, it is better to overload one
int addNumbers(int x, int y)
{
    return x + y;
}

double addNumbers(double x, double y)
{
    return x + y;
}

int main()
{
    int myNum1 = addNumbers(1, 2);
    int myNum2 = addNumbers(7.6, 4.8);

    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2;
    return 0;
}