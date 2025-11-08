#include <stdio.h>

// Pointer examples
int main()
{
    // Basic pointer usage
    int number = 42;
    int *ptr = &number;

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", (void *)&number);
    printf("Value of ptr: %p\n", (void *)ptr);
    printf("Value pointed to by ptr: %d\n\n", *ptr);

    // Changing value through pointer
    *ptr = 100;
    printf("After changing through pointer:\n");
    printf("Value of number: %d\n\n", number);

    // Array and pointer arithmetic
    int arr[] = {10, 20, 30, 40, 50};
    int *arrPtr = arr;

    printf("Array values using pointer:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i, *arrPtr);
        arrPtr++; // Move to next element
    }

    return 0;
}