// write a program at calculate the energy bill.
// starting and ending meter readings and charges are as follows

// no of units       charges
// 200-500           3.50
// 100-200           2.50
// less than 100     1.50

// starting - 800
// final    - 850

#include <stdio.h>
int main()
{
    int s, e, u;
    float charges;
    printf("Enter the starting meter reading: ");
    scanf("%d", &s);
    printf("Enter the ending meter reading: ");
    scanf("%d", &e);
    u = e - s;
    if (u <= 100){
        charges = u * 1.50;
    }
    else if (u > 100 && u <= 200){
        charges = u * 2.50;
    }
    else if (u > 200 && u <= 500){
        charges = u * 3.50;
    }
    printf("Total charges: %.2f", charges);
    return 0;
}

