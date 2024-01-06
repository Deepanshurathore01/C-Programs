#include <stdio.h>
#include<conio.h>

#define ROWS 3
#define COLS 3

void matrixSum(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) ;


int main() {
    int matrix1[ROWS][COLS] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};
    int matrix2[ROWS][COLS] = {{9, 8, 7},
                               {6, 5, 4},
                               {3, 2, 1}};
    int sum[ROWS][COLS];

    matrixSum(matrix1, matrix2, sum);

    printf("Sum of the matrices:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // getch();
    return 0;
}


void matrixSum(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}