#include <vector>
#include <iostream>
using namespace std; 

int main() {
    // vectors can only contain the data type they are initialized with. 
    // Vectors are identical to arrays except that their size can change throughout a program - an array has fixed size
    vector<int> v = {1, 2, 3, 4, 5};

    // a simple way of writing a range-for-loop (a loop that goes through each element). 
    // DO NOT USE for anything other than 'each element' (ex, every other element, every third, etc.)
    for (int x : v) cout << x << '\t';

    v.push_back(6);
    cout << "\nNew element is " << v[5] << endl;

    cout << "vector size is " << v.size() << endl;
    return 0;
}