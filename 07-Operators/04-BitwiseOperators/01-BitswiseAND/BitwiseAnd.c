#include<stdio.h>

int main(void)
{
    //function prototypes
    void printBinaryFormatOfNumber(unsigned int);

    //variable declarations
    unsigned int a;
    unsigned int b;
    unsigned int result;

    //code
    printf("\n\n");
    printf("Enter An Integer= ");
    scanf("%u",&a);

    printf("\n\n");
    printf("Enter Another Number= ");
    scanf("%d",&b);

    printf("\n\n\n");
    result=a&b;
    printf("Bitwise AND-ing Of \nA ==%d (Decimal) and B=%d (Decimal) gives result =%d (Decimal).\n\n",a,b,result);

    printBinaryFormatOfNumber(a);
    printBinaryFormatOfNumber(b);
    printBinaryFormatOfNumber(result);

    return(0);
}

void printBinaryFormatOfNumber(unsigned int decimal_number)
{
    //variable Declarations
    unsigned int quotient,remainder;
    unsigned int num;
    unsigned int binary_array[8];
    int i;

    //code
    for(i=0;i<8;i++)
    {
        binary_array[i]=0;
    }
    printf("The Binary Form Of the Decimal Integer %d is\t=",decimal_number);
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