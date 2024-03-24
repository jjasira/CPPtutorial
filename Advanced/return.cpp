#include <iostream>
using namespace std;

// we don't use void when we want our function to return a specific data type

int myFunction(int fint)
{
    return fint * fint;
}

int main()
{
    cout << myFunction(5) << endl;
    cout << myFunction(12);
    return 0;
}