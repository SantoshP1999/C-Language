#include <stdio.h>

int main(void)
{
    // variable Declarations
    int i_num, num, i;

    // code
    printf("\n\n");

    printf("Enater An Integer Value From Which Iteration Must Begin : ");
    scanf("%d", &i_num);

    printf("How Many Digits Do you Want toPrint From %d onwards ? :", i_num);
    scanf("%d", &num);

    printf("Printing Digits %d to %d : \n\n", i_num, (i_num + num));

    i = i_num;
    do
    {
        printf("\t%d\n", i);
        i++;
    } while (i <= (i_num + num));

    printf("\n\n");

    return (0);
}