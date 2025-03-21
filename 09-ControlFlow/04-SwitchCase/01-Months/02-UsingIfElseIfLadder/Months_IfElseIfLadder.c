#include <stdio.h>

int main(void)
{
    // variable Declarations
    int num_month;

    // code
    printf("\n\n");

    printf("Enter Number Of Month (1 to 12) : ");
    scanf("%d", &num_month);

    printf("\n\n");

    if (num_month == 1)
    {
        printf("Month Number %d is January !!!\n\n", num_month);
    }
    else if (num_month == 2)
    {
        printf("Month Number %d is February !!!\n\n", num_month);
    }
    else if (num_month == 3)
    {
        printf("Month Number %d is March !!!\n\n", num_month);
    }
    else if (num_month == 4)
    {
        printf("Month Number %d is April !!!\n\n", num_month);
    }
    else if (num_month == 5)
    {
        printf("Month Number %d is May !!!\n\n", num_month);
    }
    else if (num_month == 6)
    {
        printf("Month Number %d is June !!!\n\n", num_month);
    }
    else if (num_month == 7)
    {
        printf("Month Number %d is July !!!\n\n", num_month);
    }
    else if (num_month == 8)
    {
        printf("Month Number %d is August !!!\n\n", num_month);
    }
    else if (num_month == 9)
    {
        printf("Month Number %d is September !!!\n\n", num_month);
    }
    else if (num_month == 10)
    {
        printf("Month Number %d is October !!!\n\n", num_month);
    }
    else if (num_month == 11)
    {
        printf("Month Number %d is November !!!\n\n", num_month);
    }
    else if (num_month == 12)
    {
        printf("Month Number %d is December !!!\n\n", num_month);
    }
    else
    {
        printf("Ivalid Month Number %d Entered !!! Please Try Again...\n\n", num_month);
    }

    return (0);
}