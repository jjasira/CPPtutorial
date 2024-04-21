// as associative container that contains key-value pairs with unique keys(sorted)
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m = {{10, "cat"}, {20, "dog"}, {5, "bat"}};
    cout << "size = " << m.size() << endl;
    for (auto &p : m)
    {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;

    m.insert({100, "rabbit"});
    m.insert({10, "fish"});
    for (auto &p : m)
    {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;

    // auto it = m.erase(m.find(10));
    // cout << it->first << endl;
    int num_erased = m.erase(10); // will return 1 since this container does not allow duplicate keys
    cout << "num_erased: " << num_erased << endl;
    auto ub = m.upper_bound(10);
    auto lb = m.lower_bound(10);
    cout << "ub: " << ub->first << endl;
    cout << "lb: " << lb->first << endl;

    m.insert({{-10, "apple"}, {-30, "orange"}, {-20, "mango"}});
    for (auto &p : m)
    {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;

    map<int, string> m2 = {{10, "aa"}, {20, "bb"}, {15, "cc"}, {5, "dd"}};
    m.insert(m2.begin(), m2.end());
    for (auto &p : m)
    {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;

    return 0;
}