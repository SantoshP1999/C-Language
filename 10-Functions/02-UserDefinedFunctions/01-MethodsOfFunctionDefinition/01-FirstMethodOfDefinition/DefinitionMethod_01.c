#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{

    // function declarations
    void MyAddition(void);

    // code
    MyAddition(); // function call

    return (0);
}

void MyAddition(void)
{
    // variable Declarations
    int a, b, sum;

    // code
    printf("\n\n");
    printf("Enter Integer Value For 'A' : ");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Integer Value For 'B' : ");
    scanf("%d", &b);

    sum = a + b;

    printf("\n\n");
    printf("Sum Of %d And %d =%d\n", a, b, sum);
}