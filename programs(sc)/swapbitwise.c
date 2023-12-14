//swaping 2 numbers by using bitwise op without the help of 3rd var
#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 3;
    printf("Before swapping: a = %d, b = %d, c=%d\n", a, b ,c);
    
    a = a ^ b ^ c;
    b = a ^ b ^ c;
    c = a ^ b ^ c;
    a = a ^ b ^ c;
    
    printf("After swapping: a = %d, b = %d, c=%d\n", a, b ,c);
    return 0;
}

