#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    int sum = a+b+c;
    if(sum>=100 && sum<200){
        printf("sum is greater than 100 and less than 200\n");
    }
    else{
        printf("sum is not in the range of 100 and 200\n");
    }
    return 0;

}