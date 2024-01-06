#include <stdio.h>
#include<conio.h>

#define ROWS 3
#define COLS 3

void transposeMatrix(int mat[ROWS][COLS], int result[COLS][ROWS]);


int main() {
    int matrix[ROWS][COLS] = {{1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9}};
    int transpose[COLS][ROWS];

    transposeMatrix(matrix, transpose);

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void transposeMatrix(int mat[ROWS][COLS], int result[COLS][ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[j][i] = mat[i][j];
        }
    }
}
