#include <stdio.h>
#include <string.h>

int main()
{
    // String declaration
    char str1[] = "Hello";
    char str2[50];

    // String copy
    strcpy(str2, "World");

    // String concatenation
    strcat(str2, "!");

    // String length
    printf("Length of str1: %lu\n", strlen(str1));
    printf("Length of str2: %lu\n", strlen(str2));

    // String comparison
    if (strcmp(str1, str2) != 0)
    {
        printf("str1 and str2 are different\n");
    }

    // String formatting
    char full_message[100];
    sprintf(full_message, "%s %s", str1, str2);
    printf("Full message: %s\n", full_message);

    // String searching
    char *found = strchr(full_message, 'W');
    if (found)
    {
        printf("Found 'W' at position: %ld\n", found - full_message);
    }

    return 0;
}