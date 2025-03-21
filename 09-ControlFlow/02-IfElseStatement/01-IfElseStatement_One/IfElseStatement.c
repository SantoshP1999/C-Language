#include <stdio.h>

int main(void)
{
    // variable Declarations
    int a, b, p;

    // code
    a = 9;
    b = 30;
    p = 30;

    // 1 if-else

    printf("\n\n");
    if (a < b)
    {
        printf("Entering First if-block...\n\n");
        printf("A is Less Than B !!!\n\n");
    }
    else
    {
        printf("Entering First else-block...\n\n");
        printf("A is NOT Less Than B !!!\n\n");
    }
    printf("First if-else Pair Done !!!\n\n");

    // 2 if-else

    printf("\n\n");
    if (b != p)
    {
        printf("Entering Second if-block...!\n\n");
        printf("B Is NOT Equal To P !!!\n\n");
    }
    else
    {
        printf("Entering Second else-block\n\n");
        printf("B Is Equal To P !!!\n\n");
    }
    printf("Secnd if-else Pair Done\n\n");

    return (0);
}