#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned long long i = 0;
    while(1){
        FILE *fp = fopen("rand-del.txt", "w");
        if(fp == NULL){
            continue;
        }
        for(i = 0; i < 1024 * 1024; i++){
            fputc('a', fp);
        }
        fclose(fp);
        remove("rand-del.txt");
    }
}