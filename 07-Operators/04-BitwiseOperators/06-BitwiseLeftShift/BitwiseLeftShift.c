#include<stdio.h>

int main(void)
{
    //function prototype
    void printBinaryFormOfNumber(unsigned int);

    //variable Declarations
    unsigned int a;
    unsigned int num_bits;
    unsigned int result;

    //code 
    printf("\n\n");
    printf("Enter A Number=");
    scanf("%d",&a);

    printf("By How Many Bits Do you want To Shift A=%d To the Left ?",a);
    scanf("%d",&num_bits);

    printf("\n\n\n");
    result =a << num_bits;
    printf("Bitwse Left-Shifting A=%d By %d Bits \nGives The Result =%d (Decimal). \n\n",a,num_bits,result);

    printBinaryFormOfNumber(a);
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

    printf("The Binary Form Of the Decimal Integer %d is \t=\t",decimal_number);
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