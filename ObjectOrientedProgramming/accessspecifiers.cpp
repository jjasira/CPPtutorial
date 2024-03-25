/*
In C++, there are three access specifiers:
i. Public - members are accessible from outside the class
ii. private - members cannot be accessed (or viewed) from outside the class
iii. protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
*/

#include <iostream>
using namespace std;

class MyClass
{
public:    // Public access specifier
    int x; // Public attribute
private:   // Private access specifier
    int y; // Private attribute
};

int main()
{
    MyClass myObj;
    myObj.x = 25; // Allowed (public)
    myObj.y = 50; // Not allowed (private)
    return 0;
}

/*
Note: It is possible to access private members of a class using a public method inside the same class. See the next chapter (Encapsulation) on how to do this.

Tip: It is considered good practice to declare your class attributes as private (as often as you can). This will reduce the possibility of yourself (or others) to mess up the code. This is also the main ingredient of the Encapsulation concept, which you will learn more about in the next chapter.
Note: By default, all members of a class are private if you don't specify an access specifier:
*/