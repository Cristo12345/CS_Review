#include <iostream>
using namespace std;

// INHERITANCE - OOP principle. ability for classes to inherit attributes from methods from another class.
// Example - a "Boat" class could inherit methods(move, honk, etc.) from a parent "Vehicle" class
// these can be inherited by children, grandchildren, great-grandchildren, ...

// We can also now use Protected access - private but accessible to all inhertors

class Vehicle
{
public:
    void honk()
    {
        cout << "honk honk" << endl;
    }

protected:
    int license;
};

class Boat : public Vehicle
{
public:
    string name;
    void setLicense(int newLicense)
    {
        license = newLicense;
    }
    void getLicense()
    {
        cout << license << endl;
    }
};

int main()
{
    Boat myBoat;
    myBoat.name = "S.S. Suleiman";

    // this wont work
    // myBoat.license = 1234;

    myBoat.honk();

    myBoat.setLicense(1234);
    myBoat.getLicense();

    return 0;
}
