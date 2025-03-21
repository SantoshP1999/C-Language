#include<stdio.h>

int main(void)
{
    //function Prototypes
    void printBinaryFormOfNumber(unsigned int);

    //Variable Declarations
    unsigned int a;
    unsigned int b;
    unsigned int result;

    //code
    printf("\n\n");
    printf("Enter A Number= ");
    scanf("%d",&a);

    printf("\n\n");
    printf("Enter Another Number= ");
    scanf("%d",&b);

    printf("\n\n");
    result=a^b;
    printf("Bitwise XOR-ing Of A= %d (Decimal) and B= %d (Decimal) Gives Result= %d (Decimal).\n\n",a,b,result);

    printBinaryFormOfNumber(a);
    printBinaryFormOfNumber(b);
    printBinaryFormOfNumber(result);

    return (0);

}

void printBinaryFormOfNumber(unsigned int decimal_number)
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

    printf("The Binary Form of the Decimal Integer %d is\t=\t ",decimal_number);
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