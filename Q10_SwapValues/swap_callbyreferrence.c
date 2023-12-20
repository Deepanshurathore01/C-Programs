#include <stdio.h>
#include<conio.h>

void swap_callbyReference(int *a, int *b);

void main() {
    int x, y;

    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore swapping: ");
    printf("\nx = %d \ny = %d", x, y);

    swap_callbyReference(&x, &y);

    printf("\nAfter swapping: ");
    printf("\nx = %d \ny = %d", x, y);

    
}

void swap_callbyReference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
