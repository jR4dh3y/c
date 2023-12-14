#include <stdio.h>

int main() {
    int num, unset_num;
    printf("Enter a number: ");
    scanf("%d", &num);

    unset_num = num<<1;

    printf("Number after unsetting leftmost set bit: %d", unset_num);
    return 0;
}
