#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Dynamic memory allocation for a single integer
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    *ptr = 42;
    printf("Dynamically allocated integer: %d\n\n", *ptr);

    // Free the allocated memory
    free(ptr);

    // Dynamic array allocation
    int size = 5;
    int *array = (int *)malloc(size * sizeof(int));
    if (array == NULL)
    {
        printf("Array allocation failed!\n");
        return 1;
    }

    // Initialize array
    for (int i = 0; i < size; i++)
    {
        array[i] = i * 10;
    }

    // Print array
    printf("Dynamic array contents:\n");
    for (int i = 0; i < size; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // Resize array using realloc
    int new_size = 7;
    int *new_array = (int *)realloc(array, new_size * sizeof(int));
    if (new_array == NULL)
    {
        printf("Array reallocation failed!\n");
        free(array);
        return 1;
    }

    array = new_array;

    // Initialize new elements
    for (int i = size; i < new_size; i++)
    {
        array[i] = i * 10;
    }

    printf("\nResized array contents:\n");
    for (int i = 0; i < new_size; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // Free the array
    free(array);

    return 0;
}