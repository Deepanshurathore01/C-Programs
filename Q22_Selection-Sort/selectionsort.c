#include <stdio.h>
#include<conio.h>

void selection_sort(int arr[], int n);

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
    selection_sort(arr, size);
    printf("Sorted array : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int arr[], int n) {
  for(int i=0;i<n-1;i++)
  {
    int index =i;
    for(int j=i+1;j<n;j++){
      if(arr[j] < arr[index])
      index =j;
    }
    int temp =arr[index];
    arr[index] =arr[i];
    arr[i] =temp;

  }
    
}
