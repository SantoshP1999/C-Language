#include<stdio.h>

int main(void)
{
    //variable declarations
    float num;
    float *ptr = NULL; // Declaration Method 1 :- *ptr is a Variable of type 'float'

    //code
    num = 6.9f;

    printf("\n\n");

    printf(" *********** BEFORE ptr= &num **************\n\n");
    printf("Value Of 'num'            = %f\n\n", num);
    printf("Address Of 'num'          = %p\n\n", &num);
    printf("Value At Address Of 'num' = %f\n\n", *(&num));

    // Assigning adress of Variable 'num' to pointer variable 'ptr'
    //'ptr' nouw contains address of 'num' ...hence ,'ptr, is SAME as '&num'

    ptr = &num;

    printf("\n\n");

    printf(" ********** AFTER ptr = &num ***********\n\n");
    printf("Value Of 'num'            = %f\n\n", num);
    printf("Address Of 'num'          = %p\n\n", &num);
    printf("Value At Address Of 'num' = %f\n\n", *(&num));

    return (0);
}