//WAP to print the values and address of- 1D,2D and 3D arrays using pointers. Make use of 'pointer' to 'pointer' and 'pointer' to 'array' concepts.
#include <stdio.h>
void print1DArray(int *arr, int size) {
    printf("1D Array Elements and Addresses:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: Value = %d, Address = %p\n", i, *(arr + i), (arr + i));
    }
}
void print2DArray(int (*arr)[3], int rows, int cols) {
    printf("\n2D Array Elements and Addresses:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: Value = %d, Address = %p\n", i, j, *(*(arr + i) + j), (*(arr + i) + j));
        }
    }
}
void print3DArray(int (*arr)[2][2], int depth, int rows, int cols) {
    printf("\n3D Array Elements and Addresses:\n");
    for (int i = 0; i < depth; i++) {
        for (int j = 0; j < rows; j++) {
            for (int k = 0; k < cols; k++) {
                printf("Element [%d][%d][%d]: Value = %d, Address = %p\n", i, j, k, *(*(*(arr + i) + j) + k), (*(*(arr + i) + j) + k));
            }
        }
    }
}
int main() {
    int arr1D[] = {10, 20, 30, 40, 50};
    int arr2D[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int arr3D[2][2][2] = {{{7, 8}, {9, 10}}, {{11, 12}, {13, 14}}};

    print1DArray(arr1D, 5);
    print2DArray(arr2D, 2, 3);
    print3DArray(arr3D, 2, 2, 2);

    return 0;
}
