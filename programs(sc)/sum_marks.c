#include <stdio.h>
int main() {
    float sum_marks = 0.0;
    int i;
    for (i = 1; i <= 5; i++)
    {
        float marks;
        printf("Enter marks for student %d: ", i);
        scanf("%f", &marks);
        sum_marks += marks;
    }
    float mean = sum_marks / 5;
    printf("The mean marks of the 5 students is: %.2f\n", mean);
    return 0;
}
