#include <iostream>

using namespace std;

// Pass by Value vs Reference when providing args to a function

    // PASS BY VALUE: make a copy of the argument and pass the copy into the function, does not alter original value (val that was copied)
    // good for quick computations. NOT GOOD when making a copy of something large (like an image)
    int f_val(int x)
    {
        // new local copy of x
        x = x + 1;
        return x;
    }

    
    // PASS BY REFERENCE: point to the address of the variable we are using
    // this will modify the actual value of the argument we pass in
    int f_ref(int& x) {
        x = x + 1;
        return x;
    }


    // PASS BY CONST REFERENCE: point to the address of the variable we are using
    // this will NOT modify the actual value of the argument we pass in (thanks to the CONST)
    // trying to modify x's value in the function will cause error
    int f_const_ref(const int& x) {
        // x = x + 1; this line will cause an error
        int xx = x + 1;
        return xx;
    }


int main()
{
    int x = 0;

    // PASS BY VAL TEST
    // cout << x << endl;
    // cout << f_val(x) << endl;   
    // cout << x << endl; //  value of global x is unchanged


    // PASS BY REF TEST
    cout << x << endl;
    cout << f_ref(x) << endl;
    cout << x << endl; // value of global x is changed

    // PASS BY CONST REF TEST
    // cout << x << endl;
    // cout << f_const_ref(x) << endl;
    // cout << x << endl; // value of global x is  unchanged

}