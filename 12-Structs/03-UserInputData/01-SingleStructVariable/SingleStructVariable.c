#include <stdio.h>
#include <conio.h>

struct MyData
{
    int i;
    float f;
    double d;
    char c;
};

int main(void)
{
    // variable declarations
    struct MyData data; // declaring a single struct variable

    // code
    // User Input For Values Of Data Members Of 'struct MyData'
    printf("\n\n");

    printf("Enter Integer Value For Data Member 'i' Of 'struct MyData' : \n");
    scanf("%d", &data.i);

    printf("Enter Float Value For Data Member 'f' Of 'struct MyData' : \n");
    scanf("%f", &data.f);

    printf("Enter Double Value For Data Member 'd' Of 'struct MyData' : \n");
    scanf("%lf", &data.d);

    printf("Enter Character Value For Data Member 'c' Of 'struct MyData' : \n");
    data.c = getch();

    // Displaying Values Of The Data Members Of 'struct MyData'
    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("i = %d\n", data.i);
    printf("f = %f\n", data.f);
    printf("d = %lf\n", data.d);
    printf("c = %c\n\n", data.c);

    return (0);
}