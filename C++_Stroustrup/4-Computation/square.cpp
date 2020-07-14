#include <iostream>

using namespace std;

// 4.5.1 - an iterative function for squaring a number 
int square(int x)
{
    int sq = 0;
    for (int i = 0; i < x; i++)
    {
        sq += x;
    }
    return sq;
}

int main()
{

    int x;

    cout << "Enter a number to square" << endl;
    cin >> x;
    cout << square(x) << endl;

    return 0;
}