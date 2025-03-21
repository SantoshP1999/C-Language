#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    // function Declaration
    void MyAddition(void);
    int MySubtraction(void);
    void MyMultiplication(int, int);
    int MyDivision(int, int);

    // variable Declarations
    int result_subtraction;
    int a_multiplication, b_multiplication;
    int a_division, b_division, result_division;

    // code

    //--------------ADDITION---------------------
    MyAddition(); // function Call

    //--------------SUBTRACTION----------------
    result_subtraction = MySubtraction(); // function call
    printf("\n\n");
    printf("Subtraction Yields Result = %d\n", result_subtraction);

    //----------------MULTIPLICATION------------------------
    printf("\n\n");
    printf("Enter Integer Value For 'A' For Multiplication : ");
    scanf("%d", &a_multiplication);

    printf("\n\n");
    printf("Enter Integer Value For 'B' For Multiplication : ");
    scanf("%d", &b_multiplication);

    MyMultiplication(a_multiplication, b_multiplication); // function call

    //------------------DIVISION-------------------------
    printf("\n\n");
    printf("Enter Integer Value For 'A' For Division : ");
    scanf("%d", &a_division);

    printf("\n\n");
    printf("Enter Integer Value For 'B' For Division : ");
    scanf("%d", &b_division);

    result_division = MyDivision(a_division, b_division); // function call
    printf("\n\n");
    printf("Division Of %d and %d Gives =%d (Quotient)\n", a_division, b_division, result_division);
    printf("\n\n");

    return (0);
}

//----function Definition of MyAddition()--------
void MyAddition()
{
    // variable Declaration
    int a, b, sum;

    // code
    printf("\n\n");
    printf("Enter Integer Value For 'A' For Addition : ");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Integer Value For 'B' For Addition : ");
    scanf("%d", &b);

    sum = a + b;
    printf("\n\n");
    printf("Sum of %d And %d =%d\n\n", a, b, sum);
}

//----function Definition of MySubtraction()--------
int MySubtraction(void)
{
    // variable Declaration
    int a, b, subtraction;

    // code
    printf("\n\n");
    printf("Enter Integer Value For 'A' For Subtraction : ");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Integer Value For 'B' For Subtraction : ");
    scanf("%d", &b);

    subtraction = a - b;
    return (subtraction);
}

//----function Definition of MyMultiplication()--------
void MyMultiplication(int a, int b)
{
    // variable Declaration
    int multiplication;

    // code
    multiplication = a * b;
    printf("\n\n");
    printf("Multiplication of %d And %d =%d\n\n", a, b, multiplication);
}

//----function Definition of MyDivision()--------
int MyDivision(int a, int b)
{
    // variable Declaration
    int division_quotient;

    // code
    if (a > b)
        division_quotient = a / b;
    else
        division_quotient = b / a;
}