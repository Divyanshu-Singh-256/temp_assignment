//WAP to read a string into a text file using fputs() function.
#include <stdio.h>
int main() {
    FILE *file;
    char filename[100];
    char text[500];

    // Input filename from user
    printf("Enter the name of the file to write to: ");
    scanf("%s", filename);

    // Open the file in write mode
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input text from user
    printf("Enter the text to write to the file:\n");
    getchar(); // To consume the newline character left by previous scanf
    fgets(text, sizeof(text), stdin);

    // Write text to the file using fputs()
    fputs(text, file);

    // Close the file
    fclose(file);

    printf("Text written to '%s' successfully.\n", filename);
    return 0;
}
