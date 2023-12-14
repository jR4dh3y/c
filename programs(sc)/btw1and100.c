#include <stdio.h>
void main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    (a > 0 && a < 100)? printf("%d is between 1 and 100.\n", a): printf("%d is not between 1 and 100.\n", a);
}