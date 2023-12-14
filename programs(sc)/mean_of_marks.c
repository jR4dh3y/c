#include <stdio.h>

int main() {
    int score1, score2, score3, score4, score5;
    float mean;

    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &score1, &score2, &score3, &score4, &score5);

    mean = (score1 + score2 + score3 + score4 + score5) / 5.0;

    printf("Mean = %.2f", mean);

    return 0;
}
