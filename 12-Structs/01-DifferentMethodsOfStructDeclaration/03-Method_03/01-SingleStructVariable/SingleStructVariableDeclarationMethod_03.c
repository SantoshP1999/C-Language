#include <stdio.h>

int main(void)
{
    // DEFIING STRUCT
    struct MyData
    {
        int i;
        float f;
        double d;
    } data; // declaring a single struct variable of type 'struct MyData' locally

    // variable declarations
    int i_size;
    int f_size;
    int d_size;
    int struct_MyData_size;

    // code
    // Assigning data values to the Data Members of  'struct MyData,
    data.i = 30;
    data.f = 2.34f;
    data.d = 123.3322;

    // Displaying Values Of the Data Members Of 'struct MyData'
    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("i= %d \n", data.i);
    printf("f= %f \n", data.f);
    printf("d= %lf \n", data.d);

    // Calculating Sizes (In Bytes) Of The Data Members Of 'struct MyData'
    i_size = sizeof(data.i);
    f_size = sizeof(data.f);
    d_size = sizeof(data.d);

    // Displaying Sizee (In Bytes) Of the entire 'struct MyData'
    printf("\n\n");
    printf(" SIZES (in Bytes) DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("SIZES of 'i'= %d \n", i_size);
    printf("SIZES of 'f'= %d \n", f_size);
    printf("SIZES of 'd'= %d \n", d_size);

    // Calculating Size (In Bytes) Of the entire 'struct MyData'
    printf("\n\n");
    printf("Size of 'struct MyData' : %d bytes\n\n", struct_MyData_size);

    return (0);
}
