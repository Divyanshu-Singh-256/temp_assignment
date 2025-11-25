//WAP to create a custom data type using structures and arrays to represent a real world entity such as book and student.
#include <stdio.h>
#include <string.h>
struct Book {
    char title[100];
    char author[100];
    int pages;
    float price;
};
int main() {
    struct Book books[2];

    // Assigning values to the first book
    strcpy(books[0].title, "The C Programming Language");
    strcpy(books[0].author, "Brian W. Kernighan and Dennis M. Ritchie");
    books[0].pages = 272;
    books[0].price = 29.99;

    // Assigning values to the second book
    strcpy(books[1].title, "Clean Code");
    strcpy(books[1].author, "Robert C. Martin");
    books[1].pages = 464;
    books[1].price = 34.95;

    // Displaying the book information
    for(int i = 0; i < 2; i++) {
        printf("Book %d Title: %s\n", i + 1, books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Number of Pages: %d\n", books[i].pages);
        printf("Price: $%.2f\n\n", books[i].price);
    }

    return 0;
}