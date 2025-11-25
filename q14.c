//WAP to read, write and display the content of the file.
#include <stdio.h>
int main() {
    FILE *file;
    char filename[100];
    char ch;

    // Input filename from user
    printf("Enter the name of the file to read and write: ");
    scanf("%s", filename);

    // Open the file in write mode
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Input text from user and write to the file
    printf("Enter the text to write to the file (end with EOF/Ctrl+D):\n");
    while ((ch = getchar()) != EOF) {
        fputc(ch, file);
    }

    // Close the file after writing
    fclose(file);

    // Reopen the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // Display the content of the file
    printf("\nContent of the file '%s':\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file after reading
    fclose(file);

    return 0;
}