#include <stdio.h>

int searchElement(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == value) {
            return i; 
        }
    }
    return -1;  
}

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]); 

    int value = 7;  
    int result = searchElement(arr, size, value); 

    if (result != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri %d\n", value, result);
    } else {
        printf("Gia tri %d khong co trong mang.\n", value);
    }

    return 0;
}

