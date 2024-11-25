#include <stdio.h>

void moveZeroes(int arr[], int n) {
    int count = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; 
        }
    }
    while (count < n) arr[count++] = 0;
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZeroes(arr, n);
    printf("Array after moving zeroes: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}