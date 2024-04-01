#include <iostream>
// container adapter with the functionality of stack
// The class template acts as a wrapper to the underlying container - only a specific set of functions is provided
// pushes and pops element from one end of underlying container (top of the stack)

#include <stack>

using namespace std;

int main()
{
    stack<int> S;
    for (int i = 0; i < 5; i++)
        S.push(i);

    cout << "Size = " << S.size() << endl;
    cout << "Top = " << S.top() << endl;

    S.pop();
    S.pop();
    cout << "Size = " << S.size() << endl;
    cout << "Top = " << S.top() << endl;
    if (S.empty())
        cout << "Stack is empty" << endl;
    else
    {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}