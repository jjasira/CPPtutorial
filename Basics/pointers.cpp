#include <string>
#include <iostream>
using namespace std;

int main()
{
    string food = "pizza";

    // there are three ways to declare a pointer varriable, but the first way is preffered
    /*
    string* mystring;
    string *mystring;
    string * mystring;
    */
    string *ptr = &food;

    cout << food << endl;
    cout << &food << endl;
    cout << ptr << endl;
}
