//WAP to pass a structure as an argument into functions using Call by value and Call by reference.
#include <stdio.h>
#include <string.h>
struct Book {
    char title[100];
    char author[100];
    int pages;
    float price;
};
// Function to display book information (Call by Value)
void displayBookByValue(struct Book b) {
    printf("Book Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Number of Pages: %d\n", b.pages);
    printf("Price: $%.2f\n", b.price);
}
// Function to display book information (Call by Reference)
void displayBookByReference(struct Book *b) {
    printf("Book Title: %s\n", b->title);
    printf("Author: %s\n", b->author);
    printf("Number of Pages: %d\n", b->pages);
    printf("Price: $%.2f\n", b->price);
}
int main() {
    struct Book book1;

    // Assigning values to the book1 structure
    strcpy(book1.title, "The C Programming Language");
    strcpy(book1.author, "Brian W. Kernighan and Dennis M. Ritchie");
    book1.pages = 272;
    book1.price = 29.99;

    // Displaying the book information using Call by Value
    printf("Displaying Book Information (Call by Value):\n");
    displayBookByValue(book1);

    // Displaying the book information using Call by Reference
    printf("\nDisplaying Book Information (Call by Reference):\n");
    displayBookByReference(&book1);

    return 0;
}