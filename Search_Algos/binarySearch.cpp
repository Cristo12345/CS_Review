// Binary Search is the simplest divide-and-conquer search algorithm.

// PRE: arr is an already sorted array of unique integers. 
// POST: we return the index of the desired integer in arr; otherwise, the integer is not in the array --> return -1

#include <iostream>
using namespace std;

int binarySearch(int arr[], int x, int min, int max) {
    if (max >= 1) {
        int mid = min + (max-1) / 2;

        // CASE: We have found item at middle of array, return index of mid
        if (arr[mid] == x) {
            return mid;
        }

        // CASE: item is in second half of array, we perform recursive call with mid+1 and max as lower and upper bounds
        else if (arr[mid] < x) {
            return binarySearch(arr, x, mid + 1, max);
        }

        // CASE: item is in lower half, we perform recursive call with min and mid-1 as lower and upper bounds
        else {
            return binarySearch(arr, x, min, mid-1);
        }
    }
    
    //CASE: item was not found in array
    else {
        return -1;
    }
}


int main() {
    int arr[] = {2, 4, 6, 13, 15, 22, 28};
    int res = binarySearch(arr, 20, 0, 6);

    (res == -1) ? cout << "Item not found"
                : cout << "Item found at index " << res;
    return 0;
}