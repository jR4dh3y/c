#include <stdio.h>

int main() {
    int rows = 4;
    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        for (int k = 1; k <= 2 * (rows - i); k++){
            printf(" ");
        }
        for (int l = 1; l <= i; l++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
