#include <stdio.h>

int main()
{
    // Writing to a file
    FILE *writeFile = fopen("example.txt", "w");
    if (writeFile == NULL)
    {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fprintf(writeFile, "Hello, File I/O!\n");
    fprintf(writeFile, "This is line 2\n");
    fprintf(writeFile, "Numbers: %d, %d, %d\n", 1, 2, 3);

    fclose(writeFile);

    // Reading from a file
    FILE *readFile = fopen("example.txt", "r");
    if (readFile == NULL)
    {
        printf("Error opening file for reading!\n");
        return 1;
    }

    char buffer[100];
    printf("File contents:\n");
    printf("-------------\n");

    while (fgets(buffer, sizeof(buffer), readFile) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(readFile);

    // Appending to a file
    FILE *appendFile = fopen("example.txt", "a");
    if (appendFile == NULL)
    {
        printf("Error opening file for appending!\n");
        return 1;
    }

    fprintf(appendFile, "\nAppended line!\n");
    fclose(appendFile);

    // Reading the updated file
    readFile = fopen("example.txt", "r");
    if (readFile == NULL)
    {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nUpdated file contents:\n");
    printf("--------------------\n");

    while (fgets(buffer, sizeof(buffer), readFile) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(readFile);

    return 0;
}