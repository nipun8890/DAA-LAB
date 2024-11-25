#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void interchangeSecond(int arr[], int n) {
    int firstMin = 0, secondMin = 0, firstMax = 0, secondMax = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[firstMin]) {
            secondMin = firstMin;
            firstMin = i;
        } else if (arr[i] < arr[secondMin] && arr[i] != arr[firstMin]) {
            secondMin = i;
        }

        if (arr[i] > arr[firstMax]) {
            secondMax = firstMax;
            firstMax = i;
        } else if (arr[i] > arr[secondMax] && arr[i] != arr[firstMax]) {
            secondMax = i;
        }
    }

    if (secondMin != firstMin && secondMax != firstMax) {
        swap(&arr[secondMin], &arr[secondMax]);
    }

    printf("Array after swapping: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {3, 5, 1, 2, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    interchangeSecond(arr, n);
    return 0;
}