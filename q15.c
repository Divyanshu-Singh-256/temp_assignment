//WAP to copy a binary file from another file.
#include <stdio.h>
int main() {
    FILE *sourceFile;
    FILE *destFile;
    char sourceFilename[100], destFilename[100];
    unsigned char buffer[1024];
    size_t bytesRead;

    // Input source and destination filenames from user
    printf("Enter the name of the source binary file: ");
    scanf("%s", sourceFilename);
    printf("Enter the name of the destination binary file: ");
    scanf("%s", destFilename);

    // Open the source file in binary read mode
    sourceFile = fopen(sourceFilename, "rb");
    if (sourceFile == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    // Open the destination file in binary write mode
    destFile = fopen(destFilename, "wb");
    if (destFile == NULL) {
        printf("Error opening destination file!\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy content from source file to destination file
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    printf("Binary content copied from '%s' to '%s' successfully.\n", sourceFilename, destFilename);
    return 0;
}