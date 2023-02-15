#include "header.h"

void searchValue(int mat[][100], int rows, int cols, int value) {
    int i, j, found = 0;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (mat[i][j] == value) {
                printf("Nilai %d ditemukan pada baris %d kolom %d\n", value, i+1, j+1);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("Nilai %d tidak ditemukan dalam matriks\n", value);
    }
}

void multiplyMatrix(int mat[][100], int rows, int cols, int constant) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            mat[i][j] *= constant;
        }
    }
}

void transposeMatrix(int mat[][100], int rows, int cols) {
    int i, j;
    int temp;

    for (i = 0; i < rows; i++) {
        for (j = i; j < cols; j++) {
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
}

void reflectMatrix(int mat[][100], int rows, int cols) {
    int i, j, temp;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols/2; j++) {
            temp = mat[i][j];
            mat[i][j] = mat[i][cols-1-j];
            mat[i][cols-1-j] = temp;
        }
    }
}

void compareMatrix(int mat1[][100], int rows1, int cols1, int mat2[][100], int rows2, int cols2) {
    int i, j, equal = 1;

    if (rows1 != rows2 || cols1 != cols2) {
        equal = 0;
    } else {
        for (i = 0; i < rows1; i++) {
            for (j = 0; j < cols1; j++) {
                if (mat1[i][j] != mat2[i][j]) {
                    equal = 0;
                    break;
                }
            }

            if (!equal) {
                break;
            }
        }
    }
}
