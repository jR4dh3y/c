#include <stdio.h>

int main() {
    int x, y, z, a, b, c, sum1, sum2;
    printf("Enter the values of s, y, and z: ");
    scanf("%d %d %d", &x, &y, &z);
    a = (x > y) ? x : y;
    b = (y > z) ? y : z;
    c = (z > x) ? z : x;
    sum1 = x + y + z;
    sum2 = a + b + c;
    if (sum1 == sum2) {
        printf("The sums are equal.\n");
    } else {
        printf("The sums are not equal.\n");
    }
    printf("%d %d %d\n", a, b, c);
    printf("%d %d %d\n", x, y, z);
    return 0;
}


  