#include<stdio.h>
int main(){
    int n,k;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter the bit position to toggle: ");
    scanf("%d",&k);
    printf("The number after toggling the %dth bit is: %d\n",k,n^(1<<(k-1)));
    return 0;
}




