// The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and set methods.

#include <iostream>
using namespace std;

class Employee
{
private:
    int salary;

public:
    void setSalary(int s)
    {
        salary = s;
    }

public:
    int getSalary() { return salary; }
};

int main()
{
    Employee james;
    james.setSalary(100000);
    cout << james.getSalary() << endl;
    return 0;
}

/*
It is considered good practice to declare your class attributes as private (as often as you can). Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts
Increased security of data
*/