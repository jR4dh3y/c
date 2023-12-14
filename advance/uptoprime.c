#include<stdio.h>

int main(){
    int n, i=2, j, isPrime;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime numbers up to %d are: ", n);
    while(i<=n){
        isPrime = 1;
        for(j=2; j<=i/2; j++){
            if(i%j == 0){
                isPrime = 0;
            }
        }
        if(isPrime == 1){
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}