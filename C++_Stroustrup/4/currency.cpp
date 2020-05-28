#include <iostream>

using namespace std;

// 4.4.1.2 currency converter excercise 

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