#include <string>
#include <iostream>
using namespace std;

// void means that the function does not have a return value
void myFunction()
{
    cout << "This is my first function" << endl;
}

// if a user-defined function is declared after the main() function, an error will occur
int main()
{
    myFunction();
    return 0;
}