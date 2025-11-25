/*Using the following pointer expressions
             x=*ptr++;
             x=*++ptr;
             x=++*ptr;
             x=(*ptr)++;
WAP to interpret the following
Suppose, value at address 2000 is 25, value at 2002 is 38 ptr is an integer pointer that contains address 2000. The value of *ptr is 25 find the o/p or the values of x from the above.
 */
#include <stdio.h>
int main() {
    int arr[] = {25, 38}; // Simulating memory addresses 2000 and 2002
    int *ptr = arr;      // ptr points to the first element (address 2000)
    int x;

    // x = *ptr++;
    ptr = arr; // Reset ptr to point to the first element
    x = *ptr++; // x gets value at ptr (25), then ptr increments to point to next element
    printf("After x = *ptr++: x = %d, ptr points to %d\n", x, *ptr);

    // x = *++ptr;
    ptr = arr; // Reset ptr to point to the first element
    x = *++ptr; // ptr increments first to point to next element, then x gets value at ptr (38)
    printf("After x = *++ptr: x = %d, ptr points to %d\n", x, *ptr);

    // x = ++*ptr;
    ptr = arr; // Reset ptr to point to the first element
    x = ++*ptr; // Value at ptr (25) is incremented to 26, then x gets this new value (26)
    printf("After x = ++*ptr: x = %d, value at ptr is now %d\n", x, *ptr);

    // x = (*ptr)++;
    ptr = arr; // Reset ptr to point to the first element
    x = (*ptr)++; // x gets current value at ptr (26), then value at ptr is incremented to 27
    printf("After x = (*ptr)++: x = %d, value at ptr is now %d\n", x, *ptr);

    return 0;
}