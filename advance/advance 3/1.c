#include<stdio.h>
void main(){
    int n,i=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i;i<=10;){
        printf("%d x %d = %d\n",n,i*10,n*i*10);
        i++;
    }
}




