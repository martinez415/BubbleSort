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

int main()
{
    int x[] = { 4, 2, 65, 78, 99, 21, 6, 79, 78, 100 };

    // in c++ get array size by size of array divided by size of int
    int xLength = sizeof(x) / sizeof(int);

    cout << "Original Array" << endl;
    for (int i = 0; i < xLength; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    BubbleSort(x, xLength);
    cout << "Sorted Array" << endl;
    for (int i = 0; i < xLength; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}
