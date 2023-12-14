#include <stdio.h>

int main() {
    int n, unset_num;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    unset_num = n & (n - 1);
    
    printf("Number with rightmost set bit unset: %d", unset_num);
    return 0;
}
