#include <stdio.h>

int main() {
    int a[3][3]={
        {1,2,3},//0 2
        {4,5,6},//1 1
        {7,8,9} //2 0
    };
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) {
            if (i == j) { 
                printf("%d ", a[i][j]);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}
    
