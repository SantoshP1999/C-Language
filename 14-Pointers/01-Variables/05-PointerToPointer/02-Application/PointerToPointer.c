#include <stdio.h>

int main(void)
{
    // variable Declarations
    int num;
    int *ptr = NULL;
    int **pptr = NULL;

    // code
    num = 10;

    printf("\n\n");

    printf("**** BEFORE ptr = &num ******\n\n");
    printf("Value Of 'num'            = %d\n\n", num);
    printf("Address Of 'num'          = %p\n\n", &num);
    printf("Value At Address Of 'num' = %d\n\n", *(&num));

    ptr = &num;

    printf("\n\n");

    printf("**** AFTER ptr            = &num ******\n\n");
    printf("Value Of 'num'            = %d\n\n", num);
    printf("Address Of 'num'          = %p\n\n", &ptr);
    printf("Value At Address Of 'num' = %d\n\n", *ptr);

    pptr = &ptr;

    printf("\n\n");

    printf("**** AFTER pptr = &ptr ******\n\n");
    printf("Value Of 'num'                          = %d\n\n", num);
    printf("Value Of 'num' (ptr)                    = %p\n\n", ptr);
    printf("Value Of 'ptr' (pptr)                   = %p\n\n", pptr);
    printf("Address Of 'ptr' (*pptr)                = %p\n\n", *pptr);
    printf("Value At Address Of 'num'(*ptr) (*pptr) = %d\n\n", **pptr);

    return (0);
}