#include <iostream>

using namespace std;

int main() {
    // Const Variables cannot have their value changed - the following code does not compile
    // good to use const for variables you know will NEVER change (ex, using pi in a geometry program) 
    const int x = 7;
    // x += 3;

    // you can perform other assignments/ops with a const - the below code is fine
    int y = x + 3;
    cout << y << endl;

    return 0;
}