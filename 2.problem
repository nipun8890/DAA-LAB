#include <stdio.h>

void insert(int arr[], int *n, int element, int pos) {
    for (int i = *n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = element;
    (*n)++;
}

void delete(int arr[], int *n, int pos) {
    for (int i = pos; i < *n - 1; i++) arr[i] = arr[i + 1];
    (*n)--;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;

    insert(arr, &n, 10, 2);
    delete(arr, &n, 3);

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}