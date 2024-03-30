#include <iostream>
#include <list>

using namespace std;

void print_list(list<int> ll)
{
    for (list<int>::iterator it = ll.begin(); it != ll.end(); ++it)
        cout << *it << "\t";
    cout << endl;
}

int main()
{
    list<int> nums = {1, 2, 3, 4, 5};
    print_list(nums);
    cout << "SIZE = " << nums.size() << endl;

    list<int> nums2 = nums;
    print_list(nums2);

    cout << std::boolalpha << nums.empty() << endl;

    cout << *nums.begin() << ", " << *nums.rbegin() << endl;

    // inserting in a list is different from a vector
    print_list(nums);
    list<int>::iterator it = nums.begin();
    while (*it != 3 && it != nums.end())
    {
        it++;
    }
    nums.insert(it, 100);
    print_list(nums);

    nums.erase(it);
    print_list(nums);

    nums.remove(4);
    print_list(nums);

    nums.clear();
    print_list(nums);
    cout << std::boolalpha << nums.empty() << endl;

    print_list(nums2);

    nums2.push_back(-100);
    nums2.push_front(-200);
    print_list(nums2);

    nums2.pop_back();
    nums2.pop_front();
    print_list(nums2);

    return 0;
}