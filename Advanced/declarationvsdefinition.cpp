#include <string>
#include <iostream>
using namespace std;

// function declaration
void myFunction();

// the main function
int main()
{
    myFunction();
    return 0;
}

// Function definition
// so we can separate the function declaration and definition, but the declaration should come before the main() function
void myFunction()
{
    cout << "I just got excuted" << endl;
}