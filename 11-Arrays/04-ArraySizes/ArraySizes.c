#include <stdio.h>

int main(void)
{
    // variable Declarations
    int iArray_One[5];
    int iArray_Two[5][3];
    int iArray_Three[100][100][5];

    int num_rows_2D;
    int num_columns_2D;

    int num_rows_3D;
    int num_columns_3D;
    int depth_3D;

    // code
    ////////////    1-D
    printf("\n\n");
    printf("Size of 1-D Integer Array iArray_One = %lu\n", sizeof(iArray_One));
    printf("Number of Elements in 1-D integer Array iArray_One = %lu\n", sizeof(iArray_One) / sizeof(int));

    /////////////////////// 2-D

    printf("\n\n");
    printf("Size of 2-D integer array iArray_Two = %lu\n", sizeof(iArray_Two));

    printf("Number Of Rows in 2-D Integer Array iArray_Two = %lu\n", (sizeof(iArray_Two) / sizeof(iArray_Two[0])));
    num_rows_2D = (sizeof(iArray_Two) / sizeof(iArray_Two[0]));

    printf("Number Of Elements (columns) in One row in  2-D Integer Array iArray_Two = %lu\n", (sizeof(iArray_Two[0]) / sizeof(iArray_Two[0][0])));
    num_columns_2D = (sizeof(iArray_Two[0]) / sizeof(iArray_Two[0][0]));

    printf("Number of Elements in Total in 2-D Array iArray_Two = %d\n", (num_rows_2D * num_columns_2D));

    printf("\n\n");

    /////////////////////////// 3-D

    printf("\n\n");
    printf("Size of 3-D integer array iArray_Three = %lu\n", sizeof(iArray_Three));

    printf("Number Of Rows in 3-D Integer Array iArray_Three = %lu\n", (sizeof(iArray_Three) / sizeof(iArray_Three[0])));
    num_rows_3D = (sizeof(iArray_Three) / sizeof(iArray_Three[0]));

    printf("Number Of Elements (columns) in One row in  3-D Integer Array iArray_Three = %lu\n", (sizeof(iArray_Three[0]) / sizeof(iArray_Three[0][0])));
    num_columns_3D = (sizeof(iArray_Three[0]) / sizeof(iArray_Three[0][0]));

    printf("Number Of Elements (depth) in One row in  3-D Integer Array iArray_Three = %lu\n", (sizeof(iArray_Three[0][0]) / sizeof(iArray_Three[0][0][0])));
    depth_3D = (sizeof(iArray_Three[0][0]) / sizeof(iArray_Three[0][0][0]));

    printf("Number of Elements in Total in 3-D Array iArray_Three = %d\n", (num_rows_3D * num_columns_3D * depth_3D));

    printf("\n\n");

    return (0);
}