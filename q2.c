//Perform pointer arithmetic on pointers(increment/decrement) of different data types and observe the changes in memory addres and the effects on data access
#include <stdio.h>
int main() {
    int intVar = 10;
    char charVar = 'A';
    float floatVar = 5.5;

    int *intPtr = &intVar;
    char *charPtr = &charVar;
    float *floatPtr = &floatVar;

    printf("Initial Addresses:\n");
    printf("intPtr: %p, charPtr: %p, floatPtr: %p\n", (void*)intPtr, (void*)charPtr, (void*)floatPtr);

    // Incrementing pointers
    intPtr++;
    charPtr++;
    floatPtr++;

    printf("\nAddresses after Incrementing:\n");
    printf("intPtr: %p, charPtr: %p, floatPtr: %p\n", (void*)intPtr, (void*)charPtr, (void*)floatPtr);

    // Decrementing pointers
    intPtr--;
    charPtr--;
    floatPtr--;

    printf("\nAddresses after Decrementing:\n");
    printf("intPtr: %p, charPtr: %p, floatPtr: %p\n", (void*)intPtr, (void*)charPtr, (void*)floatPtr);

    return 0;
}