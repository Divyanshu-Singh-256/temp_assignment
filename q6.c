//WAP to create a custom data type using structures allowing grouping of variables to represent a real world entity such as book and student.
#include <stdio.h>
#include <string.h>
struct Book {
    char title[100];
    char author[100];
    int pages;
    float price;
};
int main() {
    struct Book book1;

    // Assigning values to the book1 structure
    strcpy(book1.title, "The C Programming Language");
    strcpy(book1.author, "Brian W. Kernighan and Dennis M. Ritchie");
    book1.pages = 272;
    book1.price = 29.99;

    // Displaying the book information
    printf("Book Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Number of Pages: %d\n", book1.pages);
    printf("Price: $%.2f\n", book1.price);

    return 0;
}
