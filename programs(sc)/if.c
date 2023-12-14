// wap a program to print first 5 no starting from 1 with there square root of that number
#include <stdio.h>
#include <math.h>
int main(){
    int i,a;
    for(i=1;i<=5;i++)
    {
        a=pow(i,2);
        printf("%d %d\n",i, a);
    }
}