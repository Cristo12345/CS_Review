#include <iostream>

using namespace std;

// 4.4.1.2 currency converter excercise using SWITCH - also some rules regarding SWITCH

//  1. SWITCH only works on numbers and chars - NO strings
//  2. cannot use variables in case expressions - must be constant
//  3. cannot use same value for different cases
//  4. can use several case labels for a single case (ex. case 2: case 4: case 6: cout << num is even)
//  5. end ALL cases with a 'break;'

int main() {
    
    double amount; 
    char curr;

    cout << "Enter amount of money and currency type to be converted to USD" << endl;
    cout << "Currencys available: E - euros | P - pounds | Y - yen" << endl;

    cin >> amount >> curr;

    switch (curr)
    {
    case 'E':
        amount *= 1.11;
        break;
    
    case 'P':
        amount *= 1.23;
        break;
    
    case 'Y':
        amount *= 0.0093;
        break;

    default:
        cout << "Invalid input" << endl;
        return 0;
        break;
    }

    cout << amount << " USD" << endl;

    return 0;
}