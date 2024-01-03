#include <stdio.h>

void passByValue(int arr[], int size) {
    // Creating a copy of the array
    int copiedArray[size];

    // Copying elements from original array to the copied array
    for (int i = 0; i < size; i++) {
        copiedArray[i] = arr[i];
    }

    // Modifying the copied array
    for (int i = 0; i < size; i++) {
        copiedArray[i] *= 2; // Doubling each element
    }

    // Printing the modified copy of the array
    printf("Modified Array (inside function - pass by value):\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", copiedArray[i]);
    }
    printf("\n");
}

int main() {
    int size = 5;
    int arr[] = {1, 2, 3, 4, 5};

    printf("Original Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    passByValue(arr, size);

    // Printing the original array to show that it remains unchanged
    printf("Original Array after function call (remains unchanged):\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
