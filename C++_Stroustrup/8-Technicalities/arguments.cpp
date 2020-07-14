#include <iostream>

using namespace std;

// Pass by Value vs Reference when providing args to a function

    // PASS BY VALUE: make a copy of the argument and pass the copy into the function, does not alter original value (val that was copied)
    // good for quick computations. NOT GOOD when making a copy of something large (like an image)
    int fval(int x)
    {
        x = x + 1;
        return x;
    }



int main()
{
    int x = 0;
    cout << x << endl;
    cout << fval(x) << endl;   
    cout << x << endl; // original value of x is unchanged
}