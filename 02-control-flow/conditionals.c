#include <stdio.h>

// Control flow examples
int main()
{
    int age = 20;

    // if-else example
    if (age >= 18)
    {
        printf("You are an adult\n");
    }
    else
    {
        printf("You are a minor\n");
    }

    // switch example
    char grade = 'B';
    switch (grade)
    {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
        printf("Good job!\n");
        break;
    case 'C':
        printf("Fair\n");
        break;
    default:
        printf("Need improvement\n");
    }

    return 0;
}