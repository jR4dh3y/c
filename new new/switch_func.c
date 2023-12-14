#include<stdio.h>
char operator();
float add(float num1,float num2);
float sub(float num1,float num2);
float mul(float num1,float num2);
float div(float num1,float num2);
int main(){
    float num1,num2,res;
    scanf("%f %f",&num1,&num2);
    switch(operator()){
        case '+':
            res=add(num1,num2);
            printf("Result is: %.2f",res);
            break;
        
        case '-':
            res=sub(num1,num2);
            printf("Result is: %.2f",res);
            break;
        
        case '*':
            res=mul(num1,num2);
            printf("Result is: %.2f",res);
            break;
        
        case '/':
            if(num2==0){
                printf("Error: Division by Zero is not possible");
            } 
            else{
                res=div(num1,num2);
                printf("Result is: %.2f",res);
            }
            break;
        }
    return 0;
}

char operator(){
    char op;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    return op;
}

float add(float num1, float num2){
    return num1 + num2;
}

float sub(float num1, float num2){
    return num1 - num2;
}

float mul(float num1, float num2){
    return num1 * num2;
}

float div(float num1, float num2){
    return num1 / num2;
}
