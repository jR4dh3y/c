#include<stdio.h>
void main(){
    int a,c=0,i;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(i=2;i<a;i++){
        if(a%i==0){
            c++;
        }
    }
    if(c==1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}
