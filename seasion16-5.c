#include <stdio.h>

void updateElement(int *arr, int newValue, int index) {
    *(arr + index) = newValue; 
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]); 

    printf("Mang ban dau:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]); 
    }

    updateElement(arr, 100, 2);

    printf("\nMang sau khi cap nhat:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]); 
    }

    return 0;
}

