#include<stdio.h>
void main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int sum;
    for (int i = 0; i < 10; i++)
    {
        sum += a[i];
        
    }
    printf("%d ",sum);
}