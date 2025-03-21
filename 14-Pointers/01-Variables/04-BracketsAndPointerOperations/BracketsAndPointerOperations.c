#include <stdio.h>

int main(void)
{
    // variable declarations
    int num;
    int *ptr = NULL;
    int ans;

    // code
    num = 5;
    ptr = &num;

    printf("\n\n");
    printf(" num     =%d\n", num);
    printf(" &num    =%p\n", &num);
    printf(" *(&num) =%d\n", *(&num));
    printf(" ptr     =%p\n", ptr);
    printf(" *ptr    =%d\n", *ptr);

    printf("\n\n");

    // Add 10 to 'ptr' which is the address of 'num'
    printf("Answer Of (ptr +  10) = %p\n", (ptr + 10));

    printf("Answer Of *(ptr + 10) = %d\n", *(ptr + 10));

    printf("Answer Of (*ptr + 10) = %d\n\n", (*ptr + 10));

    //***** ASSOCIATIVITY OF *(VALUE AT ADDRESS) AND ++ AND -- OPERATORS IS FROM RIGHT TO LEFT */

    ++*ptr; // pre-incrementing
    printf("Answer Of ++*ptr : %d\n", *ptr);

    *ptr++; // post-incrementing
    printf("Answer Of *ptr++ : %d\n", *ptr);

    // RIGHT TO LEFT
    ptr = &num;
    (*ptr)++;

    printf("Answer Of (*ptr)++ : %d\n", *ptr);

    return (0);
}