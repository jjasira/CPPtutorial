#include <iostream>
#include <queue>
#include <vector>
/*
    container adaptor that provides constant time lookup of the largest (by default) element, at the expense
    of logarithmis insertion and extraction
    A user provided compare can be provided to change the ordering
        template<
            class T,
            class container = std::vector<T>,
            class compare = std::less<typename Container::value_type>
        > class priority_queue;
*/
/* CONTAINER
   the type of the underlying container to use to store the elements
   must satisfy the requirements of SequenceContainer and its iterator must satisfy the
   requirements of LegacyRandomAccessIterator.
   Additionally it must provide the following functions with the usual semantics: front(), push_back(), pop_back()
   std::vector and std::deque satisfy the requirements.
*/
/*
    COMPARE
    a compare type providing a strict weak ordering
    compare parameter is defined such that, it returns true if its first argument comes before its second argument in a weak ordering.
*/
using namespace std;

int main()
{
    /*
    DEFAULT
    priority_queue<int> Q;
    vector<int> v = {8, 1, 6, 4, 0, 7, 2, 9};
    for (int x : v)
        Q.push(x);
    while (!Q.empty())
    {
        cout << Q.top() << " ";
        Q.pop();
    }
    cout << endl;
    */

    /*
    priority_queue<int, vector<int>, std::greater<int>> Q;
    vector<int> v = {8, 1, 6, 4, 0, 7, 2, 9};
     for (int x : v)
         Q.push(x);
     while (!Q.empty())
     {
         cout << Q.top() << " ";
         Q.pop();
     }
     cout << endl;
    */

    // lets use our own custom comparator
    auto cmp = [](int a, int b)
    {
        return (a < b);
    };
    priority_queue<int, vector<int>, decltype(cmp)> Q(cmp);
    vector<int> v = {8, 1, 6, 4, 0, 7, 2, 9};
    for (int x : v)
        Q.push(x);
    while (!Q.empty())
    {
        cout << Q.top() << " ";
        Q.pop();
    }
    cout << endl;

    return 0;
}