#include <stdio.h>

// SEFINING STRUCT
struct MyData
{
    int i;
    float f;
    double d;
};

struct MyData data; // declaring a Single struct variable of type 'struct MyData' globally

int main(void)
{
    // variable declarations
    int i_size;
    int f_size;
    int d_size;
    int struct_MyData_size;

    // code
    // Assigning Data Values To THe Data Membvers Of 'struct MyData'
    data.i = 30;
    data.f = 11.45f;
    data.d = 1.2142;

    // Displaying Values Of  the Data Members Of 'struct MyData'
    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("i = %d\n", data.i);
    printf("f = %f\n", data.f);
    printf("d = %lf\n", data.d);

    // Calculating Sizes (In Bytes) Of the Data Members 'struct MyData'
    i_size = sizeof(data.i);
    f_size = sizeof(data.f);
    d_size = sizeof(data.d);

    // Displaying Sizes (In Bytes) Of  the Entire 'struct MyData'
    printf("\n\n");
    printf("Sizes (in Bytes) Of DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("Size of 'i' = %d\n", i_size);
    printf("Size of 'f' = %d\n", f_size);
    printf("Size of 'd' = %d\n", d_size);

    // Calculating Sizes (In Bytes) Of entire STRUCT 'struct MyData'
    struct_MyData_size = sizeof(struct MyData); // struct_MyData_size = sizeof(MyData);

    // Displaying Sizes (In Bytes) of the entire 'struct MyData'
    printf("\n\n");
    printf("Size of 'struct MyData' : %d bytes\n\n", struct_MyData_size);

    return (0);
}