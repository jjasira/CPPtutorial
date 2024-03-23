#include <iostream>
using namespace std;

int main()
{
    string cars[4] = {"volvo", "BMW", "audi", "toyota"};
    // for each loop syntax is as follows
    for (string i : cars)
    {
        cout << i[0] << "\n";
    }
    return 0;
}
