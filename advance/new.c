#include <stdio.h>

int main() {
    char str[] = "123143";
    int sum = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        sum += (int)str[i];
    }

    printf("Sum: %d\n", sum);

    return 0;
}
