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
    // int a, b, c;
    // cout << "Enter three numbers" << endl;
    // cin >> a >> b >> c;

    // if (a < b)
    // {
    //     if (a < c) {
    //         if (b < c) {
    //             cout << a << b << c << endl;
    //         }
    //         else {
    //             cout << a << c << b << endl;
    //         }
    //     }
    //     else {
    //         cout << c << a << b << endl;
    //     }
    // }
    // else {
    //     if (b < c) {
    //         if (a < c) {
    //             cout << b << a << c << endl;
    //         }
    //         else {
    //             cout << b << c << a << endl;
    //         }
    //     }
    //     else {
    //         cout << c << b << a << endl;
    //     }
    // }

    // Q11 - ask user how many of each coin they have and output total 
    int pen, nic, dim, qua;
    cout << "Enter how many pennies, nickels, dimes, and quarters you have" << endl;
    cin >> pen >> nic >> dim >> qua;
    cout << "Pennies: " << pen << endl;
    cout << "Nickels: " << nic << endl; 
    cout << "Dimes: " << dim << endl;
    cout << "Quarters: " << qua << endl;
    cout << "Total: $" << (pen * 0.01) + (nic * 0.05) + (dim * 0.10) + (qua * .25) << endl;
 
    return 0;
}