#include <stdio.h>
int main(void)
{
    // variable Declarations
    int i, j;

    // code
    printf("\n\n");

    i = 1;
    while (i <= 10)
    {
        printf("i=%d\n", i);
        printf("-----------------------------\n\n");

        j = 1;
        while (j <= 5)
        {
            printf("\tJ=%d\n", j);
            j++;
        }
        i++;
        printf("\n\n");
    }

    return (0);
}