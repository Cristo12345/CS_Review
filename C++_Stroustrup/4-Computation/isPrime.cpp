#include <iostream>

using namespace std;

bool isPrime(int x) {
    for (int i = 2; i < (x/2) + 1; i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    cout << "Enter number to check if prime!" << endl;
    double x;
    cin >> x;

    if (x == 0) {
        cout << "0 is not prime" << endl;
        return 0;
    }

    if (isPrime(x) == true) {
        cout << x << " is prime!" << endl;
    }
    else {
        cout << x << " is not prime!" << endl;
    }

    return 0;
}