// Bubblesort goes through the entire array, checks the current element and the next one, then swaps them if they
// are not in correct order. By this method, we will eventually put all elements in correct place. 
// At the end of the kth pass, the kth largest element will be in the correct place
// We must perform an entire pass without needing to swap before we can be sure the array is sorted. As such, this method
// is inefficient as we must make another pass after the array is sorted. 

// Pre: arr is an array of unique integers, n is the size of the array
// Post: return arr sorted in ascending order

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {

    bool isSorted;

    for (int i = 0; i < size && !isSorted; i++) {
        isSorted = true; 

        for (int j = 0; j < size; j++) {
            if (arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                isSorted = false;
            }
        }
    }

    return;
}

int main() {
    int myArr[] = {6, 2, 7, 11, 5, 8};
    int size = (sizeof(myArr)/sizeof(*myArr));

    cout << "Original array is \n";
    for (int i = 0; i < size; i++) {
        cout << myArr[i] << ' ';
    }

    bubbleSort(myArr, size);

    cout << "\nSorted array is \n";
    for (int j = 0; j < size; j++) {
        cout << myArr[j] << ' ';
    }

    return 0;
}