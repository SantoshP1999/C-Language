#include<stdio.h>

int main(void)
{
    //variable Declarations
    int a;

    //code
    printf("\n\n");

    a=5;
    if(a)   //Non-Zero Positive Value
    {
        printf("if-block 1: 'A' Exists And Has Value = %d !!!\n\n",a);
    }

    a=-5;
    if(a)   //Non-Zero Negative Value
    {
        printf("if-block 2: 'A' Exists And Has Value = %d !!!\n\n",a);
    }

    a=0;
    if(a)   //Zero Value
    {
        printf("if-block 3: 'A' Exists And Has Value = %d !!!\n\n",a);
    }

    printf("All Three if-statements Are Done !!!");

    return (0);
}