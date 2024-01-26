#include<iostream>
using namespace std;

void sort(int array[], int size);

int main() {
    int array[] = {10, 1, 9, 2, 4, 5, 6, 7, 8, 3};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);

    for (int element : array) {
        cout << element << " ";
    }

    //bubblesort 
    //we begin at [0] the beginning of our array we'll examine the element if element on the left is larger than the element on the right then we swap them 
    //for the swapping procedure we use temporary holding variables while a digit changes its index position
    //then we repeat till we repeat till we reach the end

    return 0;
}

void sort(int array[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp; // Fix: Correct assignment to array[j + 1]
            }
        }
    }
}
