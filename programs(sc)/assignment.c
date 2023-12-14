//take two vars and determine the second variable by using conditional operator
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter number: ");
    scanf("%d",&a);
    b = (a%5==0)? 0:1;
    printf("%d\n",b);

}