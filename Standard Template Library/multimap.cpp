// an associative container that containes sorted list of key-value pairs allowing multiple entries with same keys
#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<int, string> m = {{10, "cat"}, {20, "dog"}, {5, "bat"}};
    cout << "size = " << m.size() << endl;

    for (auto p : m)
    {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;
    m.insert({100, "rabbit"});
    m.insert({10, "fish"});
    m.insert({{10, "cat"}, {12, "bat"}});
    m.insert(make_pair<int, string>(12, "bat_2"));

    for (auto p : m)
    {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;

    map<int, string> m2 = {{10, "aa"}, {20, "bb"}, {15, "cc"}, {5, "dd"}};

    m.insert(m2.begin(), m2.end());

    for (auto p : m)
    {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;

    // cout << "size = " << m.size() << endl;
    // auto it = m.erase(m.find(10)); // will erase one of the keys
    // auto it = m.erase(10); // will erase all of the 10 keys
    // cout << it->first << endl;
    // cout << "size = " << m.size() << endl;
    auto ub = m.upper_bound(15);
    auto lb = m.lower_bound(15);
    cout << "ub = " << ub->first << endl;
    cout << "lb = " << lb->first << endl;

    auto range = m.equal_range(10);
    for (auto it = range.first; it != range.second; ++it)
    {
        cout << it->second << " ";
    }
    cout << endl;
    return 0;
}
