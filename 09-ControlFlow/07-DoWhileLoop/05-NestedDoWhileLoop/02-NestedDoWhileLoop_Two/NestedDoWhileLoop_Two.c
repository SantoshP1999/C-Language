#include <stdio.h>

int main(void)
{
    // variable Declarations
    int i, j, k;

    // code
    printf("\n\n");

    i = 1;
    do
    {
        printf("i=%d\n", i);
        printf("---------------------------\n\n");

        j = 1;
        do
        {
            printf("\tj= %d\n", j);
            printf("---------------------------\n\n");

            k = 1;
            do
            {
                printf("\t\tk= %d\n", k);
                k++;
            } while (k <= 3);
            printf("\n\n");
            j++;
            printf("\n\n");

        } while (j <= 5);
        printf("\n\n");
        i++;

    } while (i <= 10);

    return (0);
}