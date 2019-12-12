// Selection sort is simplest of sorting algorithms
// Going through an array, keep track of the smallest element (min)
// At end of loop, swap min and first element. Repeat for each element in array

// Pre: arr is an array of unique integers
// Post: return arr sorted in ascending order


#include <iostream>
using namespace std; 

void selectionSort(int arr[], int size) 
    {
        int i, j, min;

        for (i = 0; i < size-1; i++) {
                
                min = i;

                for (j = i+1; j < size; j++) 
                    {   
                        if (arr[j] < arr[min]) {
                            min = j;
                        }
                    }
                    // perform swap AFTER inner loop, not DURING
                    int tmp = arr[i];
                    arr[i] = arr[min];
                    arr[min] = tmp;
            }
    }

int main() {
    int myArr[] = {6, 2, 7, 11, 5, 8};
    int size = (sizeof(myArr)/sizeof(*myArr));

    cout << "Original array is \n";
    for (int i = 0; i < size; i++) {
        cout << myArr[i] << ' ';
    }
    

    selectionSort(myArr, size);

    cout << "\nSorted array is \n";
    for (int j = 0; j < size; j++) {
        cout << myArr[j] << ' ';
    }

    return 0;
}