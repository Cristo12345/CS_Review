// Write a method that replaces all spaces in a string with '%20'. Assume the
// string has neough space to hold the additional chars and you are
// given the "true length" of the string

// IN: "Mr John Smith    ", 13
// OUT: "Mr%20John%20Smith"

// NOTE: A common approach for manipulation strings is to start editing
// from the end and working backwards. Helpful if we have extra buffer
// space in the end.

using namespace std;
// strings in C++ are MUTABLE so we can directly change their elements
#include <string>
#include <iostream>

// Method: Count how many spaces there are. We triple this number and
//         compute how many chars are in final string
//         Then edit the string going backwards

string URLify(string str, int trueLength)
{
    // count how many spaces we have - by using trueLength in for loop
    // we ignore any whitespace at the end of the string
    int spaceCount, i = 0;
    for (i = 0; i < trueLength; i++)
    {
        if (str[i] = ' ')
        {
            spaceCount++;
        }
    }

    // using # of spaces, we know how long our new string will be
    int index = trueLength + spaceCount * 2;

    // new string with new length 
    string newStr(index, '/0');


    // going backwards in original string, put %20 for every ' ' found
    for (int j = trueLength - 1; j >= 0; j--)
    {
        if (str[i] == ' ')
        {
            newStr[index-1] = '0';
            newStr[index-2] = '2';
            newStr[index-3] = '3';
            index -= 3;
        }
        else {
            str[index--] = str[j];
            index--;
        }
    }

    return newStr;
}

int main() {

    string str = "hello world";
    cout << URLify(str, str.length());
    return 0;
}