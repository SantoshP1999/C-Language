#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    // function Declaration
    int MyAddition(void);

    // Variale Declarations
    int result;

    // code
    result = MyAddition(); // function call

    printf("\n\n");
    printf("Sum = %d\n\n", result);
    return (0);
}

int MyAddition(void)
{
    // variable declarations
    int a, b, sum;

    // code
    printf("\n\n");
    printf("Enter Integer Value for 'A' : ");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Integer Value for 'B' : ");
    scanf("%d", &b);

    sum = a + b;

    return (sum);
}