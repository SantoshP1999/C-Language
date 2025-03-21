#include <stdio.h>

// DEFINING STRUCT
struct MyData
{
    int i;
    float f;
    double d;
    char c;
};

int main(void)
{
    // Variable Declarations
    struct MyData data_one = {35, 3.8f, 1.23453, 'A'}; // Inline Initialization

    struct MyData data_two = {'P', 6.2f, 12.3422, 65};

    struct MyData data_three = {36, 'G'};

    struct MyData data_four = {79};

    // Displaying Values Of The Data Members Of 'struct MyData'
    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("i = %d\n", data_one.i);
    printf("f = %f\n", data_two.f);
    printf("d = %lf\n", data_three.d);
    printf("c = %c\n", data_four.c);

    return (0);
}