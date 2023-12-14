#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    int isCapital = (ch >= 'A' && ch <= 'Z') ? 1 : 0;
    printf("%d\n", isCapital);

    return 0;
}
