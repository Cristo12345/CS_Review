// Selection sort is simplest of sorting algorithms
// Going through an array, keep track of the smallest element (min)
// At end of loop, swap min and first element. Repeat for each element in array

// Pre: arr is an array of unique integers
// Post: return arr sorted in ascending order



#include <iostream>
using namespace std; 

void selectionSort(int arr[], int size) {

    for (int i = 0; i < size-1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {

                // swap min and new smallest element
                min = j;
                int tmp = arr[min];
                arr[min] = arr[i];
                arr[i] = tmp;
            }
        }
    }
}

int main() {
    int myArr[] = {6, 2, 7, 11, 5, 8};
    int size = (sizeof(myArr)/sizeof(*myArr));

    cout << "Original array is \n";
    for (int i = 0; i < size; i++) {
        cout << myArr[i] << '\n';
    }

    selectionSort(myArr, size);

    cout << "Sorted array is \n";
    for (int j = 0; j < size; j++) {
        cout << myArr[j] << '\n';
    }

    return 0;
}