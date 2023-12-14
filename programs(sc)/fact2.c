#include <stdio.h>

int main() {
    int n, i = 1, fact = 1;
    printf("Enter int: ");
    scanf("%d", &n);
    while (i <= n) {
        fact *= i;
        i++;
    }
    printf("Factorial of %d is %d", n, fact);
    return 0;
}
