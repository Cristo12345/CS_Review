#include <iostream>

using namespace std;

int main()
{
    string prev = " ";
    string curr;
    int numOfWords = 0;

    while (cin >> curr)
    {
        numOfWords++;

        if (prev == curr)
        {
            cout << "word number " << numOfWords << '\n';
            cout << "repeated word: " << curr << '\n';
        }
        prev = curr;
    }

    return 0;
}