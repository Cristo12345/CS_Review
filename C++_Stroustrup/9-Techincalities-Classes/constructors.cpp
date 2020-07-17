#include <iostream>
using namespace std;

// constructors are special methods used to create an object from a class
// they need to have the same name as the class they are being used for
// they may or may not take parameters
// can also be defined outside class def just like other methods

class Student {
    public:
        string name;
        int age;

        Student(string myName, int myAge) {
            name = myName;
            age = myAge;
            cout << "My name is " << name << " and I am " << age << " years old. \n";
        }
};

int main() {
    Student chris("Chris Suleiman", 22);
    return 0;
}