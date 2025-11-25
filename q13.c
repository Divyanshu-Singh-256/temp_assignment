//WAP to copy from one file to another file.
#include <stdio.h>
int main() {
    FILE *sourceFile;
    FILE *destFile;
    char sourceFilename[100], destFilename[100];
    char ch;

    // Input source and destination filenames from user
    printf("Enter the name of the source file: ");
    scanf("%s", sourceFilename);
    printf("Enter the name of the destination file: ");
    scanf("%s", destFilename);

    // Open the source file in read mode
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    // Open the destination file in write mode
    destFile = fopen(destFilename, "w");
    if (destFile == NULL) {
        printf("Error opening destination file!\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy content from source file to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    printf("Content copied from '%s' to '%s' successfully.\n", sourceFilename, destFilename);
    return 0;
}