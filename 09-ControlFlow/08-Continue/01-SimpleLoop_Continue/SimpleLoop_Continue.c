#include <stdio.h>

int main(void)
{
    // variable Declarations
    int i;

    // code
    printf("\n\n");

    printf("Printing Even Numbers From 0 to 100 :\n\n");

    for (i = 0; i <= 100; i++)
    {

        if (i % 2 != 0)
        {
            continue;
        }
        else
        {
            printf("\t%d\n", i);
        }
    }
    printf("\n\n");

    return (0);
}