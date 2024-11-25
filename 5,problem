#include <stdio.h>

void multiplyMatrices(int (*a)[10], int (*b)[10], int (*result)[10], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2;

    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) return 0;

    for (int i = 0; i < r1; i++) for (int j = 0; j < c1; j++) scanf("%d", &a[i][j]);
    for (int i = 0; i < r2; i++) for (int j = 0; j < c2; j++) scanf("%d", &b[i][j]);

    multiplyMatrices(a, b, result, r1, c1, c2);

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}