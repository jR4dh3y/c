#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    (c % 2 == 0) ? printf("Even") : printf("Odd");
    return 0;
}
