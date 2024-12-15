#include <stdio.h>

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu arr[%d] = %d\n", i, *(arr + i));
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; 
    int size = sizeof(arr) / sizeof(arr[0]);  

    printf("Cac phan tu trong mang:\n");
    printArray(arr, size);

    return 0;
}

