#include <stdio.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(void)
{
    // variable declarations
    int iArray[NUM_ROWS][NUM_COLUMNS];
    int i, j;

    int *ptr_iArray_Row = NULL;

    // code
    for (i = 0; i < NUM_ROWS; i++)
    {
        ptr_iArray_Row = iArray[i]; // iArray[i] IS THE BASE ADDRESS OF ith ROW
        for (j = 0; j < NUM_COLUMNS; j++)
        {
            *(ptr_iArray_Row + j) = (i + 1) + (j + 1); // ptr_iArray_Row (that is iArray[i] can be treated as 1D Array Using Pointers)
        }
    }
    printf("\n\n");
    printf("2D Integer Array Elements Along With Address : \n\n");
    for (i = 0; i < NUM_ROWS; i++)
    {
        for (j = 0; j < NUM_COLUMNS; j++)
        {
            printf("*(ptr_iArray_Row + %d)=%d \t\t At Address (ptr_iArray_Row + j) : %p\n", j, *(ptr_iArray_Row + j), (ptr_iArray_Row + j));
        }
        printf("\n\n");
    }

    return (0);
}