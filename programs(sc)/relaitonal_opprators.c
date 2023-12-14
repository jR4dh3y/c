#include<stdio.h>
void main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);  
    printf("%d\n",a>b);
    printf("%d\n",a<b);
    printf("%d\n",a>=b);
    printf("%d\n",a<=b);
    printf("%d\n",a==b);
    printf("%d\n",a!=b);
}


// (a>b)?printf("%d is greater than %d\n",a,b):printf("%d is greater than %d\n",b,a);
// (a==b)?printf("%d is equal to %d\n",a,b):printf("%d is not equal to %d\n",a,b);
// (a<=b)?printf("%d is less than or equal to %d\n",a,b):printf("%d is not less than or equal to %d\n",a,b);
// (a!=b)?printf("%d is not equal to %d\n",a,b):printf("%d is equal to %d\n",a,b);