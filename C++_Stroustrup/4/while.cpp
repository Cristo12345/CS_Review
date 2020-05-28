// 4.4.2.1 - while practice
// use a loop to write out a table of chars and their values (a - 97, b - 98, ..., z - 122)
#include <iostream>
using namespace std; 

int main() {
    char c = 'a';

    while (int(c) < 123) {
        cout << c << '\t' << int(c) << endl;
        c++;
    }

    cout << "-------------------" << endl;


    // in all simple cases, there is an equivalent 'for'-loop for every 'while'
    for (char i = 'a'; i <= 'z'; i++) {
        cout << i << '\t' << int(i) << endl;
    }
    
    return 0;
}