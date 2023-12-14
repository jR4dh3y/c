#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;
    char filepath[] = "sample1.txt";
    char array[100];
    int i = 0;


    file = fopen(filepath, "r+");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }
    while (fgets(array, 100, file) != NULL) {
        i++;
    }

    for (int j = 0; j < i; j++) {
        printf("%s", array[j]);
    }
    fclose(file);

    return 0;
}
