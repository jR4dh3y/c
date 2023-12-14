#include<stdio.h>
int main(){
    int a[10]={1,2,3,4,5,7,8,9,10};
    int i;
    if(a[0]>a[1]){
        for(i=0;i<10;i++){
            if(a[i]!=i-1){
                printf("%d",i+1);
                break;
            }
        }
    }
    if(a[0]<a[1]){
        for(i=0;i<10;i++){
            if(a[i]!=i+1){
                printf("%d",i+1);
                break;
            }
        }
    }       
}
