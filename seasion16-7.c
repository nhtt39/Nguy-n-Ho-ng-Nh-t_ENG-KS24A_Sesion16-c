#include <stdio.h>

void sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {34, 12, 25, 9, 56, 4, 19};
    int size = sizeof(arr) / sizeof(arr[0]); 

    printf("Mang truoc khi sap xep:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); 
    }

    sortArray(arr, size);

    printf("\nMang sau khi sap xep:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); 
    }

    return 0;
}

