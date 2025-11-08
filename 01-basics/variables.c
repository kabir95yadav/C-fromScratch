#include <stdio.h>

// Variables and data types
int main()
{
    // Integer types
    int age = 25;
    short small_num = 123;
    long large_num = 1234567890;

    // Floating point types
    float price = 19.99;
    double pi = 3.14159265359;

    // Character type
    char grade = 'A';

    // Output all variables
    printf("Age: %d\n", age);
    printf("Small number: %d\n", small_num);
    printf("Large number: %ld\n", large_num);
    printf("Price: %.2f\n", price);
    printf("Pi: %.10f\n", pi);
    printf("Grade: %c\n", grade);

    return 0;
}