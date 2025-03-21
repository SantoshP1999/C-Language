#include <stdio.h>

int main(void)
{
    // variable Declarations
    int iArray[5][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}}; // Inline Initialization
    int int_size;
    int iArray_size;
    int iArray_num_elements, iArray_num_rows, iArray_num_columns;

    // code
    printf("\n\n");
    int size = sizeof(int);

    iArray_size = sizeof(iArray);
    printf("Size of Two-Dimensional (2D) Integer Array Is =%d\n", iArray_size);

    iArray_num_rows = iArray_size / sizeof(iArray[0]);
    printf("Number of Rows in Two Dimensional (2D) Integer Array Is =%d\n\n", iArray_num_rows);

    iArray_num_columns = sizeof(iArray[0]) / int_size;
    printf("Number of Columns in Two Dimensional (2D) Integer Array Is =%d\n\n", iArray_num_columns);

    iArray_num_elements = iArray_num_rows * iArray_num_columns;
    printf("Number of Elements in Two Dimensional (2D) Integer Array Is =%d\n\n", iArray_num_elements);

    printf("\n\n");
    printf("Elements In The 2D Array : \n\n");

    //  ******** ROW 1  **********
    printf("*********   ROW 1   ***********\n");
    printf("iArray[0][0] =%d\n", iArray[0][0]);
    printf("iArray[0][1] =%d\n", iArray[0][1]);
    printf("iArray[0][2] =%d\n", iArray[0][2]);

    printf("\n\n");

    //  ******** ROW 2  **********
    printf("*********   ROW 2   ***********\n");
    printf("iArray[1][0] =%d\n", iArray[1][0]);
    printf("iArray[1][1] =%d\n", iArray[1][1]);
    printf("iArray[1][2] =%d\n", iArray[1][2]);

    printf("\n\n");

    //  ******** ROW 3  **********
    printf("*********   ROW 3   ***********\n");
    printf("iArray[2][0] =%d\n", iArray[2][0]);
    printf("iArray[2][1] =%d\n", iArray[2][1]);
    printf("iArray[2][2] =%d\n", iArray[2][2]);

    printf("\n\n");

    //  ******** ROW 4  **********
    printf("*********   ROW 4   ***********\n");
    printf("iArray[3][0] =%d\n", iArray[3][0]);
    printf("iArray[3][1] =%d\n", iArray[3][1]);
    printf("iArray[3][2] =%d\n", iArray[3][2]);

    printf("\n\n");

    //  ******** ROW 5  **********
    printf("*********   ROW 5   ***********\n");
    printf("iArray[4][0] =%d\n", iArray[4][0]);
    printf("iArray[4][1] =%d\n", iArray[4][1]);
    printf("iArray[4][2] =%d\n", iArray[4][2]);

    printf("\n\n");

    return (0);
}