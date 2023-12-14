/* 
WAP to declare an array called class and take 10 students roll numbers from the user and 
print all the roll numbers of students and also 
print 8th student roll number and 5th student roll number separately
*/
#include <stdio.h>

int main() {
    int class[10];
    int i;

    printf("Enter the roll numbers of 10 students:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d: ", i+1);
        scanf("%d", &class[i]);
    }
    printf("\nAll roll numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i+1, class[i]);
    }
    printf("\n8th student roll number: %d\n", class[7]);
    printf("5th student roll number: %d\n", class[4]);

    return 0;
}
