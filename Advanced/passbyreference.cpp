// you can also pass a reference to the function
#include <string>
#include <iostream>
using namespace std;

// note that this will not work if we passed the int istead of the references
void swapNums(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: "
         << "\n";
    cout << firstNum << secondNum << "\n";

    swapNums(firstNum, secondNum);
    cout << "After swap: "
         << "\n";
    cout << firstNum << secondNum << "\n";

    return 0;
}