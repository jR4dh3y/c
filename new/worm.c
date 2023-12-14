#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char currentFile[] = __FILE__;
    char destinationPath[] = "m.c";
    char ch;

    sourceFile = fopen(currentFile, "r");
    destinationFile = fopen(destinationPath, "w");

    if (sourceFile == NULL || destinationFile == NULL) {
        printf("Error opening files.\n");
        exit(1);
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
