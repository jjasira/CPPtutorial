// implemented using hashtables
#include <iostream>
#include <unordered_set>

using namespace std;

class Student
{
public:
    int id;
    string name;

    bool operator==(const Student &s) const
    {
        return (this->id == s.id && this->name == s.name);
    }

    void print_student() const
    {
        cout << "[ id = " << id << ", name = " << name << "]\n";
    }
};

class StudentHashFunction
{
public:
    size_t operator()(const Student &s) const
    {
        return (hash<int>{}(s.id) + hash<string>{}(s.name));
    }
};

int main()
{
    unordered_set<int> us = {5, 10, 4, 20, 5, 5, 15};
    for (int x : us)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << "size = " << us.size() << endl;
    cout << "count(5) = " << us.count(5) << endl;
    cout << "num erased(5) " << us.erase(5) << endl;
    cout << boolalpha << "found 16 = " << (us.find(16) != us.end()) << endl;
    cout << "num buckets = " << us.bucket_count() << endl;
    cout << "load factor = " << us.load_factor() << endl;

    unordered_set<Student, StudentHashFunction> uss = {{50, "Simon"}, {20, "Thomas"}};

    for (auto &st : uss)
    {
        st.print_student();
    }
    return 0;
}