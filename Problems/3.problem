#include <stdio.h>

void toLowercase(char str[]) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
    }
}

int main() {
    char str[] = "Hello World!";
    toLowercase(str);
    printf("%s\n", str);
    return 0;
}