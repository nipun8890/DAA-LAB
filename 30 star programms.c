#include <stdio.h>

// 1. Square Pattern
int square_pattern() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// 2. Empty Square
int empty_square() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("* ");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// 3. Right Triangle
int right_triangle() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// 4. Inverted Right Angle Triangle
int inverted_right_triangle() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// 5. Empty Right Angle Triangle
int empty_right_triangle() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == n - 1 || j == i) {
                printf("* ");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// 6. Reverse Empty Triangle
int reverse_empty_triangle() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (j == i || i == 0 || j == n - 1) {
                printf("* ");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// 7. Pyramid
int pyramid() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i + 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 8. Reverse Pyramid
int reverse_pyramid() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = i; k < (2 * (n - i) - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 9. Empty Pyramid
int empty_pyramid() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i + 1); k++) {
            if (i == n - 1 || k == 0 || k == (2 * i)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// 10. Empty Reverse Pyramid
int empty_reverse_pyramid() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = i; k < (2 * (n - i) - 1); k++) {
            if (i == 0 || k == i || k == (2 * (n - i) - 2)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// 11. Diamond
int diamond() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i + 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i + 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 12. Empty Diamond
int empty_diamond() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i + 1); k++) {
            if (i == n - 1 || k == 0 || k == (2 * i)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i + 1); k++) {
            if (i == 0 || k == 0 || k == (2 * i)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// 13. Mirror Right Angle Triangle
int mirror_right_triangle() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>

// Number Patterns

// 14. Number Triangle
int number_triangle() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// 15. Number Square
int number_square() {
    int N;
    printf("Enter the number of rows and columns: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// 16. Pyramid Pattern
int number_pyramid() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// 17. Pascal Triangle
int pascal_triangle() {
    int n = 5;
    for (int line = 0; line < n; line++) {
        int C = 1; // Binomial coefficient
        for (int j = 0; j < line; j++) {
            printf(" ");
        }
        for (int j = 0; j <= line; j++) {
            printf("%d ", C);
            C = C * (line - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}

// 18. Number Diamond
int number_diamond() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}

// 19. Right Angle Number Triangle
int right_angle_number_triangle() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}

// 20. Right Angle Triangle with 1 and 0
int binary_triangle() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i % 2 == 0 ? 0 : 1);
        }
        printf("\n");
    }
    return 0;
}

// 21. Decrease Number Triangle
int decrease_number_triangle() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// 22. Pyramid of Numbers
int number_pyramid_simple() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// 23. Empty Number Square
int empty_number_square() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("%d ", j);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// 24. Number Pyramid Pattern Increment One
int number_pyramid_increment() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}

// 25. Hourglass Number Pattern
int hourglass_number_pattern() {
    int n = 5;
    // Upper half
    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    // Lower half
    for (int i = 2; i <= n; i++) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// 26. +1 Triangle
int increment_triangle() {
    int n = 5;
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

// 26 (Alternate). Empty Pyramid with Numbers
int empty_number_pyramid() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == n) {
                printf("%d", i);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// Alphabetic Patterns

// 27. Right Angle Alphabet Triangle
int alphabet_right_triangle() {
    int i, j;
    char alphabet = 'A';
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", alphabet);
            alphabet++;
        }
        printf("\n");
        alphabet = 'A'; // Reset alphabet for next row
    }
    return 0;
}

// 28. Inverse Right Angle Alphabet Triangle
int inverse_alphabet_right_triangle() {
    int i, j;
    char alphabet = 'A';
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%c ", alphabet);
            alphabet++;
        }
        printf("\n");
        alphabet = 'A'; // Reset alphabet for next row
    }
    return 0;
}

// 29. Alphabet Pyramid
int alphabet_pyramid() {
    int i, j, k;
    char alphabet = 'A';
    for (i = 0; i < 5; i++) {
        for (j = 4; j > i; j--) {
            printf(" "); // Print spaces
        }
        for (k = 0; k <= i; k++) {
            printf("%c ", alphabet + k);
        }
        printf("\n");
    }
    return 0;
}

// 30. Empty Alphabet Pyramid
int empty_alphabet_pyramid() {
    int i, j, k;
    char alphabet = 'A';
    for (i = 0; i < 5; i++) {
        for (j = 4; j > i; j--) {
            printf(" "); // Print spaces
        }
        for (k = 0; k <= i; k++) {
            if (k == 0 || k == i || i == 4) {
                printf("%c ", alphabet + k);
            } else {
                printf(" "); // Print space for hollow part
            }
        }
        printf("\n");
    }
    return 0;
}

// 31. Alphabet Diamond
int alphabet_diamond() {
    int n = 5;
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%c", 'A' + i - 1);
        }
        printf("\n");
    }
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%c", 'A' + i - 1);
        }
        printf("\n");
    }
    return 0;
}

// 32. Alphabet Square
int alphabet_square() {
    int n = 5;
    char alphabet = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c ", alphabet);
        }
        printf("\n");
    }
    return 0;
}

// 33. Reverse Alphabet
int reverse_alphabet() {
    char alphabet;
    for (alphabet = 'Z'; alphabet >= 'A'; alphabet--) {
        printf("%c ", alphabet);
    }
    printf("\n");
    return 0;
}

int main() {
    reverse_alphabet(); // could be any function name 
    return 0;
}