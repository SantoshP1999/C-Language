#include<stdio.h>

int main(void)
{
    //function Prototype
    void printBinaryFormOfNumber(unsigned int);

    //variable Declarations
    unsigned int a;
    unsigned int result;

    printf("\n\n");
    printf("Enter An Integer= ");
    scanf("%d",&a);

    printf("\n\n");
    result=~a;
    printf("Bitwise Complementing \n A =%d (Decimal) gives result %d (Decimal).\n\n",a,result);
    printBinaryFormOfNumber(a);
    printBinaryFormOfNumber(result);

    return (0);
}

void printBinaryFormOfNumber(unsigned int decimal_number)
{
    //variable Declaration
    unsigned int quotient,remainder;
    unsigned int num;
    unsigned int binary_array[8];
    int i;

    //code
    for(i=0;i<8;i++)
    {
        binary_array[i]=0;
    }

    printf("The Binary Form Of the Decimal Inteer %d is\t=\t",decimal_number);
    num=decimal_number;
    i=7;
    while(num!=0)
    {
        quotient=num/2;
        remainder=num%2;
        binary_array[i]=remainder;
        num=quotient;
        i--;
    }

    for(i=0;i<8;i++)
    {
        printf("%u",binary_array[i]);
    }

    printf("\n\n");
}