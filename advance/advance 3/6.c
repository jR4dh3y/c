//revers array
#include<stdio.h>
void main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int temp[] = {0,0,0,0,0,0,0,0,0,0};
    int j = 0;
    for (int i = 9; i >= 0; i--)
    {
        temp[j] = a[i];
        j++;
    }
    for (int i = 0; i < 10; i++)
    {
        a[i] = temp[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    
}