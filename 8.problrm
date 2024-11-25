#include <stdio.h>
#include <limits.h>

void findLargestThree(int arr[], int n) {
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }

    if (third == INT_MIN) {
        printf("Not enough distinct elements.\n");
    } else {
        printf("Largest three distinct elements: %d, %d, %d\n", first, second, third);
    }
}

int main() {
    int arr[] = {10, 4, 3, 50, 23, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    findLargestThree(arr, n);
    return 0;
}