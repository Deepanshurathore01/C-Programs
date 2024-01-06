#include <stdio.h>
#include<conio.h>

#define ROWS1 3
#define COLS1 3
#define ROWS2 3
#define COLS2 3

void matrixMultiply(int mat1[ROWS1][COLS1], int mat2[ROWS2][COLS2], int result[ROWS1][COLS2]);


int main() {
    int matrix1[ROWS1][COLS1] = {{1, 2, 3},
                                 {4, 5, 6},
                                 {7, 8, 9}};
    int matrix2[ROWS2][COLS2] = {{9, 8, 7},
                                 {6, 5, 4},
                                 {3, 2, 1}};
    int mul[ROWS1][COLS2];

    matrixMultiply(matrix1, matrix2, mul);

    printf("Multiplication of the matrices:\n");
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS2; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void matrixMultiply(int mat1[ROWS1][COLS1], int mat2[ROWS2][COLS2], int result[ROWS1][COLS2]) {
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
