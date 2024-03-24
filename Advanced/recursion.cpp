#include <iostream>
using namespace std;

int sum(int k)
{
    if (k > 0)
    {
        // the function calls itself
        return k + sum(k - 1);
    }
    else
    {
        // always include a base case to avoid having a function that runs infinetly
        return 0;
    }
}

int main()
{
    int result = sum(10);
    cout << result;
    return 0;
}