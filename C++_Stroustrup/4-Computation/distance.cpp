#include <vector>
#include <iostream>

// Given a vector of doubles representing distance between cities, print the total distance. 
// Print the smallest and greatest distances. Print the mean distance.

using namespace std;

int main() {
    vector<double> v = {2, 3, 5, 8, 3, 6, 4};

    double sum, avg;
    double max, min = v[0];

    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (v[i] <= min) {
            min = v[i];
        }
        else if (v[i] > max) {
            max = v[i];
        } 
    }

    avg = sum / v.size();

    cout << "Total: " << sum << endl;
    cout << "Greatest: " << max << endl;
    cout << "Smallest: " << min << endl;
    cout << "Average: " << avg << endl;

    return 0;
}