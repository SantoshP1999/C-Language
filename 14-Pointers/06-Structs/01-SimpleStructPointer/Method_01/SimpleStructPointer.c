#include <stdio.h>
#include<stdlib.h>

// DEFINING STRUCT
struct MyData
{
    int i;
    float f;
    double d;
};

int main(void)
{
    // variable declarations
    int i_size;
    int f_size;
    int d_size;
    int struct_MyData_size;
    int pointer_to_struct_MyData_size;

    struct MyData *pData = NULL;

    // code
    printf("\n\n");

    pData = (struct MyData *)malloc(sizeof(struct MyData));
    if (pData == NULL)
    {
        printf("FAILED TO ALLOCATE MEMORY TO 'struct MyData' !!! EXITTING NOW...\n\n");
    }
    else
    {
        printf("SUCCESSFULLY ALLOCATED MEMORY TO 'struct MyData' !!!\n\n");
    }

    // Assigning Data Values To The Data Members Of 'struct MyData'
    (*pData).i = 30;
    (*pData).f = 11.45f;
    (*pData).d = 1.2995;

    // Displaying Values Of The Data Members Of 'struct MyData'
    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' Are : \n\n");
    printf("i = %d\n", (*pData).i);
    printf("f = %f\n", (*pData).f);
    printf("d = %lf\n", (*pData).d);

    // Calculating Sizes(In Bytes) Of The Data Members Of 'struct MyData'
    i_size = sizeof((*pData).i);
    f_size = sizeof((*pData).f);
    d_size = sizeof((*pData).d);

    // Displaying Size (in Bytes) Of The Data Members Of 'struct MyData'

    printf("\n\n");
    printf("SIZES (in Bytes) OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("Size of 'i' = %d bytes\n", i_size);
    printf("Size of 'f' = %d bytes\n", f_size);
    printf("Size of 'd' = %d bytes\n", d_size);

    // Calculating Size (In Bytes) Of The entire 'struct MyData'
    struct_MyData_size = sizeof(sizeof(struct MyData));
    pointer_to_struct_MyData_size = sizeof(struct MyData *);

    // Displaying Sizes (In Bytes) Of the entire 'sruct MyData'
    printf("\n\n");
    printf("Size of struct MyData : %d bytes\n\n", struct_MyData_size);
    printf("size Of Pointer to 'struct MyData' : %d bytes\n\n", pointer_to_struct_MyData_size);

    if (pData)
    {
        free(pData);
        pData = NULL;
        printf("MEMORY ALLOCATION To 'struct MyData' HAS BEEN SUCCESSFULLY FREED!!!\n\n");
    }

    return (0);
}