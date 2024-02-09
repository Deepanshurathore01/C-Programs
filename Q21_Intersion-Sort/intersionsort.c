#include <stdio.h>
#include<conio.h>

void insertion_sort(int arr[], int n);

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter the %d element : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    insertion_sort(arr, size);
    printf("Sorted array : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void insertion_sort(int arr[], int n) {

    for(int i=1;i<n;i++){
    for(int j =i;j>0;j--){
       if(arr[j] < arr[j-1]){
        // swapping the arr[j] and arr[j-1] variable 
        int temp = arr[j];
        arr[j] =arr[j-1];
        arr[j-1] = temp;
       }
       else 
       break;
    }
  }
  }

