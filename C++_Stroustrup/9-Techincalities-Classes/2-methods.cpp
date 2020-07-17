#include <iostream>
using namespace std;

// Methods are functions that belong to a class
// They can be defined inside or outside the class they belong to.
class Student
{
public:
    string name;
    int age;

    // can define method within the class definition
    void getName()
    {
        cout << name << endl;
    };

    // declaration of method to be defined outside of class def
    int getAge();
};

// can also define methods OUTSIDE of class definiton
// most code will have methods defined in a header(.h) file
// function must still be DECLARED in the class
int Student::getAge()
{
    return age;
}

int main()
{
    Student chris;

    chris.name = "Chris Suleiman";
    chris.age = 22;

    chris.getName();
    cout << chris.getAge() << '\n';

    return 0;
}