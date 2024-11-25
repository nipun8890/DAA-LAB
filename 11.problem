#include <stdio.h>

void printDistinct(int arr[], int n) {
    int found[n]; 
    int count = 0;

    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < count; j++) {
            if (arr[i] == found[j]) break;
        }
        if (j == count) {
            found[count++] = arr[i];
        }
    }

    printf("Distinct elements: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", found[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {12, 10, 9, 45, 2, 10, 10, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    printDistinct(arr, n);
    return 0;
}