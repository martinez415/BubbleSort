#include <iostream>
using namespace std;

// Functiom w/ 2 parameters the array and array size
void BubbleSort(int x[], int length) {
    int i, j, temp; // temp variable is needed for the swap of elements so you are moving it within the temp until all elements are ordered

    // outer loop
    for (i = 0; i < length; i++) {
        // inner loop
        for (j = 0; j < length - 1; j++) {
            // the if statement checks the array element vs the next element, why we use the + 1 to go to the next element index
            if (x[j] > x[j + 1]) {
                // you assign the smaller number to the temp and conduct the swap
                temp = x[j + 1];
                x[j + 1] = x[j];
                x[j] = temp;

            }
        }
    }

}

/*
int LinearSearch(int x[], int length, int n) {
    for (int i = 0; i < length; i++) {
        if (x[i] == n) {
            return i;
        }
        return -1;
    }
}
*/


int main()
{
    // an array of integers
    int x[] = { 4, 2, 65, 78, 99, 21, 6, 79, 78, 100, 34, 79, 24, 56, 95, 7, 93 };
    int key = 0;
    int attempts = 1;
    bool found = false;

    // in c++ get array size by size of array divided by size of int
    int xLength = sizeof(x) / sizeof(int);

    // display array before sorting algorithm
    cout << "Original Array" << endl;
    for (int i = 0; i < xLength; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    // pass array through BubbleSort function
    BubbleSort(x, xLength);

    // display array after sorting algorithm
    cout << "Sorted Array" << endl;
    for (int i = 0; i < xLength; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    cout << "Enter a number to search the array: ";
    cin >> key;

    for (int i = 0; i < xLength; i++) {
        if (x[i] == key) {
            found = true;
            break;
        }
        attempts++;
    }
    if (!found) {
        cout << "The number entered does not exist." << endl;
    }
    else {
        cout << "The number was found. It took " << attempts << " of attempts to find." << endl;
    }

   
}
