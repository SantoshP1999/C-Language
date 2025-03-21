#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // variable Declaration
    int **ptr_iArray = NULL;
    int i, j;
    int num_rows, num_columns;

    // code
    //**** ACCEPT NUMBER OF ROWS 'num_rows' FROM USER ****/
    printf("\n\n");
    printf("Enter Number Of Rows : ");
    scanf("%d", &num_rows);

    //******* ACCEPT NUMBER OF COLUMNS 'num_columns' FROM USER ********/
    printf("\n\n");
    printf("Enter Number Of Columns : ");
    scanf("%d", &num_columns);

    //**** ALLOCATING MEMORY TO 1D ARRAY CONSISTING OF BASE ADDRESS OF ROWS **** */
    printf("\n\n");
    printf("************* MEMORY ALLOCATION TO 2D INTEGER ARRAY **********\n\n");
    ptr_iArray = (int **)malloc(num_rows * sizeof(int *));
    if (ptr_iArray == NULL)
    {
        printf("FAILED TO ALLOCATE MEMORY TO %d ROWS OF 2D INTEGER ARRAY !!!EXITTING NOW...\n\n", num_rows);
        exit(0);
    }
    else
    {
        printf("MEMORY ALLOCATION TO  %d ROWS OF 2D INTEGER ARRAY SUCCEEDED !!!", num_rows);
    }

    //***** FILLING UP VALUES ******
    for (i = 0; i < num_rows; i++)
    {
        for (j = 0; j < num_columns; j++)
        {
            ptr_iArray[i][j] = (i * 1) + (j * 1); // can also use --> *(*(ptr_iArray + i) + j) = (i*1) + (j*1)
        }
    }

    //*******DISPLAYING VALUES ******** */
    for (i = 0; i < num_rows; i++)
    {
        for (j = 0; j < num_columns; j++)
        {
            printf("Base Address of Row %d : ptr_iArray[%d] = %p \t At Address : %p\n", i, i, ptr_iArray[i], &ptr_iArray[i]);
        }
        printf("\n\n");
    }

    //****FREEING MEMORY ALLOCATED TO EACH ROW***********/
    for (i = (num_rows - 1); i >= 0; i--)
    {
        if (ptr_iArray[i])
        {
            free(ptr_iArray[i]);
            ptr_iArray[i] = NULL;
            printf("MEMORY ALLOCATED TO ROW %d HAS BEEN SUCCESSFULLY FREED !!!\n\n", i);
        }
    }

    //********** FREEING MEMORY ALLOCATED TO 1D ARRAY CONSISTING OF BASE ADDRESS OF ROWS ****** */

    if (ptr_iArray)
    {
        free(ptr_iArray);
        ptr_iArray = NULL;
        printf("MEMORY ALLOCATED TO ptr_iArray HAS BEEN SUCCESSFULLY FREED !!!\n\n");
    }

    return (0);
}