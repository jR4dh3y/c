#include <stdio.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    int mergedArr[10];
    int i;

    for (i = 0; i < 5; i++) {
        mergedArr[i] = arr1[i];
        mergedArr[i + 5] = arr2[i];
    }

    printf("Merged Array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", mergedArr[i]);
    }
    return 0;   
}
