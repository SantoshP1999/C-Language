#include <stdio.h>

// DEFINING STRUCT
struct MyData
{
    int i;
    float f;
    double d;
    char c;
};

struct MyData data = {30, 1.34f, 3.2323, 'A'};

int main(void)
{
    // code
    // Displaying Values of The Data Membeers Of 'struct MyData'
    printf("\n\n");
    printf("i = %d\n", data.i);
    printf("f = %f\n", data.f);
    printf("i = %d\n", data.d);
    printf("c = %c\n\n", data.c);

    return (0);
}