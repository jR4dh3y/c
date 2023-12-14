#include<stdio.h>

int main() {
    int n = 5;
    int a[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &a[i]);
    }
    
    int pos, ele;
    printf("Enter the position to insert: ");
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &ele);
    
   
    for(int i = n - 1; i >= pos; i--) {
        a[i] = a[i - 1];
    }
    
   a[pos - 1] = ele;
    
    printf("The elements after insertion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
