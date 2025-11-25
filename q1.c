//wap to declare different types of pointers(int,char,float) and initialize them with the address of variables. Print the values for both the pointers and the variables they point to
#include <stdio.h>
int main() {
    int intVar = 42;
    char charVar = 'C';
    float floatVar = 3.14f;

    int *intPtr = &intVar;
    char *charPtr = &charVar;
    float *floatPtr = &floatVar;

    printf("Integer Variable: %d, Pointer Value: %d\n", intVar, *intPtr);
    printf("Character Variable: %c, Pointer Value: %c\n", charVar, *charPtr);
    printf("Float Variable: %.2f, Pointer Value: %.2f\n", floatVar, *floatPtr);

    return 0;
}