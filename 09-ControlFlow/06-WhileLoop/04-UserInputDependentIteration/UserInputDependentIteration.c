#include <stdio.h>
int main(void)
{
    // variable Declarations
    int i_num, num, i;

    // code
    printf("\n\n");

    printf("Enter An Integer Value From Which Iteration Must Begin : ");
    scanf("%d", &i_num);

    printf("How many Digits Do you Want To Print From %d Onwards ? ", i_num);
    scanf("%d", &num);

    printf("Printing Digits %d to %d : \n\n", i_num, (i_num + num));

    i = i_num;
    while (i <= (i_num + num))
    {
        printf("\t%d\n", i);
        i++;
    }
    printf("\n\n");

    return (0);
}