#include <stdio.h>

int main(void)
{
    // variable declarations

    // IN-LINE Initialization
    int iArray[5][3][2] = {{{9, 18}, {27, 36}, {45, 54}},
                           {{8, 16}, {24, 32}, {40, 48}},
                           {{7, 14}, {21, 28}, {35, 42}},
                           {{6, 12}, {18, 24}, {30, 36}},
                           {{5, 10}, {15, 20}, {25, 30}}};

    int int_size;
    int iArray_size;
    int iArray_num_elements, iArray_width, iArray_height, iArray_depth;
    int i, j, k;

    // code
    printf("\n\n");

    int_size = sizeof(int);

    iArray_size = sizeof(iArray);
    printf("Size of Three Dimensional (3D) Integer Array Is = %d\n\n", iArray_size);

    iArray_width = iArray_size / sizeof(iArray[0]);
    printf("Number Of Rows (width ) In Three Dimensional (3D) Integer Array Is = %d\n\n", iArray_width);

    iArray_height = sizeof(iArray[0]) / sizeof(iArray[0][0]);
    printf("Number Of Columns (height) In Three Dimensional (3D) Integer Array Is = %d\n\n", iArray_height);

    iArray_depth = sizeof(iArray[0][0]) / int_size;
    printf("Depth In Three Dimensional (3D) Integer Array Is = %d\n\n", iArray_depth);

    iArray_num_elements = iArray_width * iArray_height * iArray_depth;
    printf("Number of Elements In Three Dimensional (3D) Integer Array Is + %d\n\n", iArray_num_elements);

    printf("\n\n");
    printf("Elements In Integer 3D Array : \n\n");

    for (i = 0; i < iArray_width; i++)
    {
        printf("********** ROW %d   **********\n", (i + 1));
        for (j = 0; j < iArray_height; j++)
        {
            printf("**********  COLUMN %d *********\n", (j + 1));
            for (k = 0; k < iArray_depth; k++)
            {
                printf("iArray[%d][%d][%d] = %d\n", i, j, k, iArray[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return (0);
}