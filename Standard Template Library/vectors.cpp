#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3};
    cout << "v.size() " << v.size() << endl;
    cout << "v.capacity() " << v.capacity() << endl;
    cout << "v.max_size() " << v.max_size() << endl;
    v.push_back(4);
    cout << "v.size() " << v.size() << endl;
    cout << "v.capacity() " << v.capacity() << endl;

    int cap = v.capacity();
    for (int i = 0; i < 100; i++)
    {
        v.push_back(i);
        if (cap != v.capacity())
        {
            cap = v.capacity();
            cout << "capacity " << cap << endl;
        }
    }

    cout << v[103] << endl;    // unbound check, will return 0 if the index is out of bounds
    cout << v.at(103) << endl; // bound check, will return an out of bounds if the index is out of bounds e.g v.at(104)

    cout << "front " << v.front() << " back " << v.back() << endl;

    v.insert(v.begin() + 2, -100);
    cout << v[2] << endl; // -100

    cout << "size " << v.size() << endl;

    v.pop_back();
    cout << "size " << v.size() << endl;

    list<int> li = {-100, -200, -300};
    v.insert(v.begin(), li.begin(), li.end());
    cout << v[0] << v[1] << v[2] << endl;

    v.erase(v.begin(), v.begin() + 3);
    cout << v[0] << v[1] << v[2] << endl;

    return 0;
}