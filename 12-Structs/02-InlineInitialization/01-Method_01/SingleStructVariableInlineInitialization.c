#include <stdio.h>

// DEFINING STRUCT
struct MyData
{
    int i;
    float f;
    double d;
    char c;
} data = {30, 4.5f, 11.3334, 'A'}; // Inline Initialization of struct variable 'data' of type struct MyData'

int main(void)
{
    // code
    // Displaying Values of The Data Members Of 'struct MyData'
    printf("\n\n");
    printf("DATA MEMEBERS OF 'struct MyData'  ARE : \n\n");
    printf("i = %d\n", data.i);
    printf("f = %f\n", data.f);
    printf("i = %d\n", data.d);
    printf("c = %c\n\n", data.c);

    return (0);
}