#include <stdio.h>

int main() {
    char a[100] = "Hello, world!";
    char a2[100];
    
    for (int i = 0; a[i] != '\0'; i++) {
        a2[i] = a[i];
        printf("%c", a2[i]);
    }  
    
    return 0;
}
