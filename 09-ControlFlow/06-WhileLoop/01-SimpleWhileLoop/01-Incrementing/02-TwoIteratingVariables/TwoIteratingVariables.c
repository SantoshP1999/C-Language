#include <stdio.h>
int main(void)
{
    // variable Declarations
    int i, j;

    // code
    printf("\n\n");

    printf("Printing Digits 1 to 10 and 10 to 100 : \n");

    i = 1;
    j = 10;
    while (i <= 10, j <= 100)
    {
        printf("\t%d\t%d\n", i, j);
        i++;
        j = j + 10;
    }
    printf("\n\n");

    return (0);
}