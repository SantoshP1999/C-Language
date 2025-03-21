#include <stdio.h>

int main(void)
{
    // variable declarations
    int iArray[3][5];
    int int_size;
    int iArray_size;
    int iArray_num_elements, iArray_num_rows, iArray_num_columns;
    int i, j;

    // code
    printf("\n\n");

    int_size = sizeof(int);

    iArray_size = sizeof(iArray);
    printf("size of Two Dimensional (2D) Integer Array is=%d\n\n", iArray_size);

    iArray_num_rows = iArray_size / sizeof(iArray[0]);
    printf("Number or Rows In Two Dimensioanal (2D) Integer Array Is = %d\n\n", iArray_num_rows);

    iArray_num_columns = sizeof(iArray[0]) / int_size;
    printf("Number or Columns In Two Dimensioanal (2D) Integer Array Is = %d\n\n", iArray_num_columns);

    iArray_num_elements = iArray_num_rows * iArray_num_columns;
    printf("Elements In Two Dimensioanal (2D) Integer Array Is = %d\n\n", iArray_num_elements);

    printf("\n\n");
    printf("Elements In The 2D Array : \n\n");

    //  **********  ROW 1   *******
    iArray[0][0] = 1;
    iArray[0][2] = 2;
    iArray[0][3] = 3;
    iArray[0][4] = 4;
    iArray[0][5] = 5;

    iArray[1][0] = 6;
    iArray[1][1] = 7;
    iArray[1][2] = 8;
    iArray[1][3] = 9;
    iArray[1][4] = 10;

    iArray[2][0] = 11;
    iArray[2][1] = 12;
    iArray[2][2] = 13;
    iArray[2][3] = 14;
    iArray[2][4] = 15;

    //  ***********Display  *************
    for (i = 0; i < iArray_num_rows; i++)
    {
        for (j = 0; j < iArray_num_columns; j++)
        {
            printf("iArray[%d][%d] = %d\n", i, j, iArray[i][j]);
        }
        printf("\n\n");
    }

    return (0);
}
