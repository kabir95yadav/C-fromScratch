#include <stdio.h>

// Function declarations
int add(int a, int b);
float average(int arr[], int size);
void greet(const char *name);

int main()
{
    // Using the add function
    int sum = add(5, 3);
    printf("5 + 3 = %d\n", sum);

    // Using the average function
    int numbers[] = {10, 20, 30, 40, 50};
    float avg = average(numbers, 5);
    printf("Average: %.2f\n", avg);

    // Using the greet function
    greet("John");

    return 0;
}

// Function definitions
int add(int a, int b)
{
    return a + b;
}

float average(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (float)sum / size;
}

void greet(const char *name)
{
    printf("Hello, %s!\n", name);
}