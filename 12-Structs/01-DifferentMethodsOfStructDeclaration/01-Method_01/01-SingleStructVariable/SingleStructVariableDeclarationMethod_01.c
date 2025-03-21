#include <stdio.h>

// DEFINING STRUCT
struct MyData
{
    int i;
    float f;
    double d;
    char c;
} data; // Declaring a Single Struct variable of Type 'struct MyData' globally   ...

int main(void)
{
    // variable declarations
    int i_size;
    int f_size;
    int d_size;
    int struct_MyData_size;

    // code
    // Assigning Data Values To The Data Members Of 'struct MyData'
    data.i = 30;
    data.f = 11.45f;
    data.d = 1.2344;

    // Displaying Values of the Data Members of 'struct MyData'
    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("i = %d\n", data.i);
    printf("f = %f\n", data.f);
    printf("d = %lf\n", data.d);

    // calculating size (In Bytes) of the entire 'struct MyData'
    struct_MyData_size = sizeof(struct MyData); // can also give struct name ->sizeof(MyData)

    // Displaying sizes (In Bytes) of the entire 'struct MyData'
    printf("\n\n");
    printf("Size of 'struct MyData' : %d bytes\n\n", struct_MyData_size);

    return (0);
}