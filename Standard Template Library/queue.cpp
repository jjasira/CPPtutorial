#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> Q;

    cout << std::boolalpha << Q.empty() << endl;
    for (int i = 1; i <= 5; ++i)
    {
        Q.push(i);
    }
    cout << "front = " << Q.front() << endl;
    cout << "back = " << Q.back() << endl;
    cout << "size = " << Q.size() << endl;

    Q.pop();
    Q.pop();

    cout << "front = " << Q.front() << endl;
    cout << "back = " << Q.back() << endl;
    cout << "size = " << Q.size() << endl;
    return 0;
}