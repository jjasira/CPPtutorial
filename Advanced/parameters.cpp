#include <string>
#include <iostream>
using namespace std;

// we can also use a default parameter value, by using the equals sign
void myFunction(int fage, string fname = "Brian")
{
    cout << "My name is " << fname << " and I am " << fage << "years old" << endl;
}

int main()
{
    myFunction(26, "James");
    return 0;
}