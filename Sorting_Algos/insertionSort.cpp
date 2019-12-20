// Similar to sorting cards on a table
// Split array into two sections, SORTED and UNSORTED
// At start, SORTED is just the first element. With each iteration, we will move the marker for SORTED to the next element
// and insert that element in the correct position.
// After going passing through array once, each elemnt should be in correct position

// Pre: arr is an array of unique integers
// Post: return arr sorted in ascending order


#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {

    // start loop at i = 0 since first element is in SORTED. Since it's only element, it is sorted.
    for (int i = 1; i < n; i++) {


    }
}