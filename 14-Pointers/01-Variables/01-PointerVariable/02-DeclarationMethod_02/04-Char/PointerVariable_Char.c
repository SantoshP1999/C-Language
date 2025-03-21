#include <stdio.h>

int main(void)
{
    // variable declarations
    char ch;
    char* ptr = NULL; // Declaration Method 1 :- *ptr is a Variable of type 'char*'

    // code
    ch = 'A';

    printf("\n\n");

    printf(" *********** BEFORE ptr= &ch **************\n\n");
    printf("Value Of 'ch'            = %c\n\n", ch);
    printf("Address Of 'ch'          = %p\n\n", &ch);
    printf("Value At Address Of 'ch' = %c\n\n", *(&ch));

    // Assigning adress of Variable 'num' to pointer variable 'ptr'
    //'ptr' nouw contains address of 'num' ...hence ,'ptr, is SAME as '&num'

    ptr = &ch;

    printf("\n\n");

    printf(" ********** AFTER ptr = &ch ***********\n\n");
    printf("Value Of 'ch'            = %c\n\n", ch);
    printf("Address Of 'ch'          = %p\n\n", ptr);
    printf("Value At Address Of 'ch' = %c\n\n", *ptr);

    return (0);
}