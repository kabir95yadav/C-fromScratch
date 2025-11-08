#include <stdio.h>

// Loop examples
int main()
{
    // for loop
    printf("For loop counting 1 to 5:\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }
    printf("\n\n");

    // while loop
    printf("While loop counting down:\n");
    int countdown = 5;
    while (countdown > 0)
    {
        printf("%d... ", countdown);
        countdown--;
    }
    printf("Blast off!\n\n");

    // do-while loop
    printf("Do-while loop example:\n");
    int num = 1;
    do
    {
        printf("%d squared is %d\n", num, num * num);
        num++;
    } while (num <= 3);

    return 0;
}