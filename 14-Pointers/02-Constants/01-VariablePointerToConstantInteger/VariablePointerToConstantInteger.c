#include <stdio.h>

int main(void)
{
    // variable Declarations
    int num = 5;
    const int *ptr = NULL;

    // code
    ptr = &num;
    printf("\n");
    printf("Current Value Of 'num' = %d\n", num);
    printf("Current 'ptr' (Address of 'num') =%p\n", ptr);

    // Following line does NOT give error ... as we are modifying the value of the variable individually
    num++;
    printf("\n\n");
    printf("After num++, value of 'num' =%d\n", num);

    ptr++;
    printf("\n\n");
    printf("After ptr++, value of 'ptr' =%p\n", ptr);
    printf("Value at this new 'ptr' =%d\n", *ptr);
    printf("\n");

    return (0);
}