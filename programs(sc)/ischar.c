#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    int b=(c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 0:1;
    printf("%d\n", b);
    return 0;
}
