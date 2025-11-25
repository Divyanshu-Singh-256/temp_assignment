//WAP to check whether the files exist or not
#include <stdio.h>
int main() {
    FILE *file1;
    FILE *file2;
    char filename1[100], filename2[100];

    // Input filenames from user
    printf("Enter the name of the first file: ");
    scanf("%s", filename1);
    printf("Enter the name of the second file: ");
    scanf("%s", filename2);

    // Check if the first file exists
    file1 = fopen(filename1, "r");
    if (file1) {
        printf("File '%s' exists.\n", filename1);
        fclose(file1);
    } else {
        printf("File '%s' does not exist.\n", filename1);
    }

    // Check if the second file exists
    file2 = fopen(filename2, "r");
    if (file2) {
        printf("File '%s' exists.\n", filename2);
        fclose(file2);
    } else {
        printf("File '%s' does not exist.\n", filename2);
    }

    return 0;
}