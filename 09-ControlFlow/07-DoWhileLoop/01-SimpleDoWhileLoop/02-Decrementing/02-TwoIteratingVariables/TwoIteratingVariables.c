#include <stdio.h>

int main(void)
{
    // variable Declarations
    int i, j;

    // code
    printf("\n\n");

    printf("Printing Digits 10 to 1 And 100 to 10 : \n\n");
    i = 10;
    j = 100;
    do
    {
        printf("\t%d\t%d\n", i, j);
        i--;
        j = j - 10;
    } while (i >= 1, j >= 10);
    printf("\n\n");

    return (0);
}