#include <stdio.h>

int main(void)
{
    // variable declarations

    int num;

    // code
    printf("\n\n");

    printf("Enter Value For 'num' : ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Num= %d is Less than 0 (Negative) !!!\n\n", num);
    }
    else if ((num > 0) && (num <= 100))
    {
        printf("Num=%d is Between 0 And 100 !!!\n\n", num);
    }
    else if ((num > 100) && (num <= 200))
    {
        printf("Num=%d is Between 100 And 200 !!!\n\n", num);
    }
    else if ((num > 200) && (num <= 300))
    {
        printf("Num=%d is Between 200 And 300 !!!\n\n", num);
    }
    else if ((num > 300) && (num <= 400))
    {
        printf("Num=%d is Between 0 And 100 !!!\n\n", num);
    }
    else if ((num > 400) && (num <= 500))
    {
        printf("Num=%d is Between 400 And 500 !!!\n\n", num);
    }
    else if (num > 500)
    {
        printf("Num=%d is Greater than 500 !!!\n\n", num);
    }
    else
    {
        printf("Invalid Value  Entered !!!\n\n");
    }

    return (0);
}