#include <iostream>
using namespace std;

// most basic version of a class
// class is a template for creating an object; an object is a specific instance of a class
// EX: A "Fruit" class can be used to create an "Apple", "Banana", or "Mango" object.

class myClass {
    // by setting to public, anyone can view/edit this data
    public:
        int myNum;
        string myString;

    // anything in private will not be accessible from outside the class
    private:
        string myPrivateString;
};

int main() {
    myClass myObj;

    myObj.myNum = 3;
    myObj.myString = "hello";

    //this wont work
    // myObj.myPrivateString = "goodbye"

    cout << myObj.myNum << '\n';
    cout << myObj.myString;

    return 0;
}