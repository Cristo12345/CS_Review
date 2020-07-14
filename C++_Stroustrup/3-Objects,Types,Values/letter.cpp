#include <iostream>

using namespace std;

// writing a letter to a friend w/ content based on input
int main()
{
    cout << "Enter names of two friends" << endl;
    string friend1, friend2, friend2Gender;
    cin >> friend1 >> friend2;
    cout << "Enter the second friend's gender(m/f)" << endl;
    cin >> friend2Gender;

    cout << "Dear " << friend1 << "," << endl;
    cout << "\n";
    if (friend2Gender == "m")
    {
        cout << "Hope you are well. Have you seen my guy " << friend2 << " lately?" << endl;
    }

    else if (friend2Gender == "f")
    {
        cout << "Hope you are well. Have you seen my girl " << friend2 << " lately?" << endl;
    }

    else
    {
        cout << "Huh? Didn't recognize their gender." << endl;
    }

    return 0;
}