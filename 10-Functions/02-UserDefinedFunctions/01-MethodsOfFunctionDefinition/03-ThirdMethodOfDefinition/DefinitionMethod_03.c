#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    // function declaration
    void MyAddition(int, int);

    // variable declarations
    int a, b;

    // code
    printf("\n\n");
    printf("Enter Value For 'A' : ");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Value For 'B' : ");
    scanf("%d", &b);

    MyAddition(a, b); // function call

    return (0);
}

void MyAddition(int a, int b)
{
    // variable Declaration
    int sum;

    // code
    sum = a + b;
    printf("\n\n");
    printf("Sum of %d And %d = %d\n\n", a, b, sum);
}