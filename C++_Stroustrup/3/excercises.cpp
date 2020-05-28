#include <iostream>

using namespace std;

int main()
{

    // Q2
    // double miles;
    // cout << "Enter miles to convert to km" << endl;
    // cin >> miles;
    // cout << miles << " miles is " << miles*1.6 << " km!" << endl;

    // Q6 - breaks when all inputs are equal
    int a, b, c;
    cout << "Enter three numbers" << endl;
    cin >> a >> b >> c;

    if (a < b)
    {
        if (a < c) {
            if (b < c) {
                cout << a << b << c << endl;
            }
            else {
                cout << a << c << b << endl;
            }
        }
        else {
            cout << c << a << b << endl;
        }
    }
    else {
        if (b < c) {
            if (a < c) {
                cout << b << a << c << endl;
            }
            else {
                cout << b << c << a << endl;
            }
        }
        else {
            cout << c << b << a << endl;
        }
    }

    return 0;
}