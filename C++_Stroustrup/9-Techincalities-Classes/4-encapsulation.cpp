#include <iostream>
using namespace std;

// ENCAPSULATION - OOP principle. ability to "protect/hide" sensitive info from users
// this info is accessed by users via "getter" and "setter" methods

class Employee {
    private:
        int salary;

    public: 
        int getSalary() {
            return salary;
        }

        void setSalary(int newSal) {
            salary = newSal;
        }
};


int main() {
    Employee Chris;

    Chris.setSalary(100);

    // this wont work
    // cout << Chris.salary << endl;

    // this will
    cout << Chris.getSalary() << endl;

    return 0;
}