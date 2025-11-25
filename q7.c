//WAP to access the structure members using structure pointer and dot operator.
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
    struct Book *ptr;

    // Assigning values to the book1 structure
    strcpy(book1.title, "The C Programming Language");
    strcpy(book1.author, "Brian W. Kernighan and Dennis M. Ritchie");
    book1.pages = 272;
    book1.price = 29.99;

    // Assigning the address of book1 to the pointer
    ptr = &book1;

    // Displaying the book information using structure pointer and dot operator
    printf("Book Title: %s\n", ptr->title);
    printf("Author: %s\n", ptr->author);
    printf("Number of Pages: %d\n", ptr->pages);
    printf("Price: $%.2f\n", ptr->price);

    return 0;
}