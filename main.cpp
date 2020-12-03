#include <iostream>
using namespace std;

// function to print array
void print_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// function to sort array by insertion sort
void insertion_sort(int array[], int size) {
    for (int i = 1; i < size; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

int main() {
    int array[] = {4, 3, 2, 10, 12, 1, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Given array: ";
    print_array(array, size);

    insertion_sort(array, size);

    cout << "Sorted array: ";
    print_array(array, size);

    return 0;
}
