#include <stdio.h>

int main(void)
{
    // variable Declarations
    int num;
    int *ptr = NULL;
    int *copy_ptr = NULL;

    // code
    num = 5;
    ptr = &num;

    printf("\n\n");
    printf("********* BEFORE copy_ptr = pte **********\n\n");
    printf(" num      = %d\n", num);
    printf(" &num     = %p\n", &num);
    printf(" *(&num)  = %d\n", *(&num));
    printf(" ptr      = %p\n", ptr);
    printf(" *ptr     = %d\n", *ptr);

    /*  //'ptr' is an integer pointer variable ...that it it can hold the Address of
    any integer variable only
        //'cpoy_ptr' is another integer pointer variable
    */

    copy_ptr = ptr;

    printf("\n\n");
    printf("********* BEFORE copy_ptr = pte **********\n\n");
    printf(" num           = %d\n", num);
    printf(" &num          = %p\n", &num);
    printf(" *(&num)       = %d\n", *(&num));
    printf(" ptr           = %p\n", ptr);
    printf(" *ptr          = %d\n", *ptr);
    printf(" copy_ptr      = %p\n", copy_ptr);
    printf(" *copy_ptr     = %d\n", *copy_ptr);

    return (0);
}