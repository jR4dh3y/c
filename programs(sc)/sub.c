#include <stdio.h>

int main() {
    int var1, var2, sub;
    printf("Enter two number to be subtracted: ");
    scanf("%d %d", &var1, &var2);
    sub = var1 - var2;
    printf("The difference of %d and %d is %d :", var1, var2, sub);  
    return 0;
}
