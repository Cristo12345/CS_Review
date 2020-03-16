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
// Assuming we are using extended ASCII chars (so 2^8 or 256 possible values),
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



// Method 3: 
// Assuming we are using extended ASCII chars (so 2^8 or 256 possible values),
// create an array of 256 boolean values - ach index indicating whether that char has 
// already been found (case sensitive)

// O(n) --> O(1) + O(1) + O(n) * O(1)

bool isUnique3(string str) {

    // first check duplicates by looking at length of str. If it's more than 256, we know
    // there are repeat chars
    if (str.length() > 256) {
        return false;
    }

    // boolean array 
    bool charSet[256] = { 0 };
    for (int i = 0; i < str.length()-1; i++) {
        
        // store char of current iter
        char c = str[i];

        // char has been used before
        if (charSet[c] == true) {
            return false;
        }

        // char not found, update it's index in bool array
        else {
            charSet[c] = true;
        }
    }

    return true; 
}



int main() {
    // string str = "helLo";
    // cout << isUnique(str);

    // string str = "helLo";
    // cout << isUnique2(str);

    string str = "helLo";
    cout << isUnique3(str);
}