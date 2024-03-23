#include <iostream>
using namespace std;

int main()
{
    int votingAge = 18;
    int myAge = 25;
    if (myAge >= votingAge)
    {
        cout << "You are old enough to vote";
    }
    else
    {
        cout << "You are under the voting age";
    }
    return 0;
}