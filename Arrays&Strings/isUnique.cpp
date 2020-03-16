//  Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures? 
#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

// Method 1: 
// Loop through each character. For each character loop through rest 
// of string and check if duplicate is found (2 for loops) (not case sensitive)

// O(n) with n = str.len()

bool isUnique(string str) {
    for (int i = 0; i < str.length()-1; i++) {
        for (int j = i+1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                return false;
            }
        }
    }

    // no duplicates found
    return true;
}


// Method 2:
// Assuming we are using ASCII chars (so 2^8 or 256 possible values),
// we can sort the string, then loop through it. If any element is equal to an adjacent
// element, we have a duplicate and return false. (case sensitive)

// O(nlogn)

bool isUnique2(string str) {
    // first, sort the string - O(n log n)
    sort(str.begin(), str.end());

    for (int i = 0; i < str.length()-2; i++) {
        if (str[i] == str[i+1]) {
            return false;
        }
    }

    // no duplicates found
    return true;
}



int main() {
    // string str = "helLo";
    // cout << isUnique(str);

    string str = "helLo";
    cout << isUnique2(str);
}