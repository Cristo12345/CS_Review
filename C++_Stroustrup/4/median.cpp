#include <vector>
#include <iostream>

// Excercise 2 - write a program that prints out the median of a vector

using namespace std;

int main() {

    vector<double> v;
    cout << "Enter numbers to enter into vector" << endl;
    // takes in user input to populate vector. Stops when user hits ctlr+x and Enter
    for (double val; cin >> val;) {
        v.push_back(val);
    }

    for (int i = 0; i < v.size(); i++) {
        if (i == v.size()/2) {
            cout << "median is " << v[i] << endl;
        }
    }

    // print out vector. for testing.
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }

    return 0;
}