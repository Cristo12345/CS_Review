// Given two strings, determine if one is a permutation of the other.
// Assume white space is signifanct and it is case sensitive
#include <iostream>
using namespace std;
#include <string>
#include <algorithm> // std::sort

// Method 1: Sort both strings then check if those sorts are equal

// Runtime: O(nlogn)

bool isPerm(string str1, string str2)
{

    // permutations must be same length so we can do a quick check first
    if (str1.length() != str2.length())
    {
        return false;
    }

    // sort strings - each sort avg time is assumed to be nlogn
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare sorted strings
    for (int i = 0; i < str1.length(); i++)
        if (str1[i] != str2[i])
            return false;

    return true;
}

int main()
{
    string str1 = "god";
    string str2 = "dog";

    if (isPerm(str1, str2)) {
        cout << "permutation found";
    }
    else {
        cout << "no permutation";
    }

    return 0;
}