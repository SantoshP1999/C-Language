#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    // variable Declarations
    char strArray[5][10];
    int char_size;
    int strArray_size;
    int strArray_num_elements, strArray_num_rows, strArray_num_columns;
    int i;

    // code
    printf("\n\n");
    char_size = sizeof(char);

    strArray_size = sizeof(strArray);
    printf("Size Of Two Dimensional (2D) Character Array (String Array) Is = %d\n\n", strArray_size);

    strArray_num_rows = strArray_size / sizeof(strArray[0]);
    printf("Number Of Rows (string) In Two Dimensional (2D) Character Array (String Array) Is =%d\n\n", strArray_num_rows);

    strArray_num_columns = sizeof(strArray[0]) / char_size;
    printf("Number Of Columns In Two Dimensional (2D) Character Array (String Array) Is = %d\n\n", strArray_num_columns);

    strArray_num_elements = strArray_num_rows * strArray_num_columns;
    printf("Maximum Number Of Elements (Characters) In Two Dimensional (2D) Character Array (String Array) Is = %d\n\n", strArray_num_elements);

    //  PIECE-MEAL ASSIGNMENT
    //  ROW 1/ STRING 1
    strArray[0][0] = 'M';
    strArray[0][1] = 'y';
    strArray[0][2] = '\0'; // NULL-TERMINATING CHARACTER

    strArray[1][0] = 'N';
    strArray[1][1] = 'a';
    strArray[1][2] = 'm';
    strArray[1][3] = 'e';
    strArray[1][4] = '\0'; // NULL-TERMINATING CHARACTER

    strArray[2][0] = 'I';
    strArray[2][1] = 's';
    strArray[2][2] = '\0';

    strArray[3][0] = 'S';
    strArray[3][1] = 'a';
    strArray[3][2] = 'n';
    strArray[3][3] = 't';
    strArray[3][4] = 'o';
    strArray[3][5] = 's';
    strArray[3][6] = 'h';
    strArray[3][7] = '\0'; // NULL-TERMINATING CHARACTER

    strArray[4][0] = 'P';
    strArray[4][1] = 'h';
    strArray[4][2] = 'a';
    strArray[4][3] = 't';
    strArray[4][4] = 'a';
    strArray[4][5] = 'n';
    strArray[4][6] = 'g';
    strArray[4][7] = 'a';
    strArray[4][8] = 'r';
    strArray[4][9] = 'r';
    strArray[4][10] = '\0'; // NULL-TERMINATING CHARACTER

    printf("\n\n");
    printf("The Strings In the 2D Character Array are : \n\n");

    for (i = 0; i < strArray_num_rows; i++)
    {
        printf("%s ", strArray[i]);
    }
    printf("\n\n");

    return (0);
}

int myStrLen(char str[])
{
    // variable declarations
    int j;
    int string_length = 0;

    // code
    for (j = 0; j < MAX_STRING_LENGTH; j++)
    {
        if (str[j] == '\0')
        {
            break;
        }
        else
        {
            string_length++;
        }
    }

    return (string_length);
}