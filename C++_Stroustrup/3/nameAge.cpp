#include <iostream>

using namespace std;

int main() {
    cout << "Enter your name and age" << endl;
    string name;
    double age; 
    cin >> name >> age;
    age = age * 12;
    cout << "hello, " << name << " (" << age << " months)";

    return 0;
}