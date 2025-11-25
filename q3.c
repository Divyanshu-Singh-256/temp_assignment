//wap to define a function that accepts pointers as parameters for variables by reference using pointers and modofy their values within the function
#include <stdio.h>
void modifyValues(int *intPtr, char *charPtr, float *floatPtr) {
    *intPtr += 10;        // Increment integer value by 10
    *charPtr += 1;       // Increment character value to next ASCII character
    *floatPtr *= 2.0f;   // Double the float value
}
int main() {
    int intVar = 20;
    char charVar = 'X';
    float floatVar = 7.5f;

    printf("Before Modification:\n");
    printf("Integer: %d, Character: %c, Float: %.2f\n", intVar, charVar, floatVar);

    modifyValues(&intVar, &charVar, &floatVar);

    printf("After Modification:\n");
    printf("Integer: %d, Character: %c, Float: %.2f\n", intVar, charVar, floatVar);

    return 0;
}