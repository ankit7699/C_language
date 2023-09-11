#include <stdio.h>

#define SIZE 2

// Function prototypes
void readMatrix(int matrix[SIZE][SIZE]);
void addMatrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int result[SIZE][SIZE]);
void displayMatrix(int matrix[SIZE][SIZE]);

int main() {
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], sum[SIZE][SIZE];

    printf("Enter elements of the first matrix (2x2):\n");
    readMatrix(matrix1);

    printf("Enter elements of the second matrix (2x2):\n");
    readMatrix(matrix2);

    addMatrices(matrix1, matrix2, sum);

    printf("Resultant matrix after addition:\n");
    displayMatrix(sum);

    return 0;
}

// Function to read a matrix from user input
void readMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to add two matrices
void addMatrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
