#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i;
    }
    return -1; 
}

int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter the number to search: ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key);
    if (result != -1) {
        printf("Number found at index: %d\n", result);
    } else {
        printf("Number not found.\n");
    }
    return 0;
}