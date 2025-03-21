#include <stdio.h>

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
    struct MyData data;

    // code
    // Assigning Data Values To the Data Members Of 'struct MyData'
    data.i = 30;
    data.f = 11.34f;
    data.d = 45.42534;
    data.c = 'S';

    // Displaying Values of the Data Members Of 'struct MyData'
    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("i = %d\n", data.i);
    printf("f = %f\n", data.f);
    printf("f = %lf\n", data.d);
    printf("c = %c\n", data.c);

    printf("\n\n");
    printf("ADDRESSES OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("'i' Occupies Addresses From %p\n", &data.i);
    printf("'f' Occupies Addresses From %p\n", &data.f);
    printf("'d' Occupies Addresses From %p\n", &data.d);
    printf("'c' Occupies Addresses From %p\n\n", &data.c);

    printf("Starting Address Of 'struct MyData' variable 'data' = %p\n\n", &data);

    return (0);
}