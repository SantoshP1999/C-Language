#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{

    // function prototype
    int MyStrlen(char[]);

    // variable Declaration
    int chArray[MAX_STRING_LENGTH];
    int iStringLength = 0;

    // code

    //      STRING INPUT
    printf("\n\n");
    printf("Enter A String : \n\n");
    gets_s(chArray, MAX_STRING_LENGTH);

    //  ***STRING OOUTPUT
    printf("String Entered By You : \n\n");
    printf("%s\n", chArray);

    //  **STRING LENGTH
    printf("\n\n");
    iStringLength = strlen(chArray);
    printf("Length Of String Is = %d Characters !!!\n\n", iStringLength);

    return (0);
}

int MyStrlen(char str[])
{
    // variable declarations
    int j;
    int string_length = 0;

    // code

    for (j = 0; j < MAX_STRING_LENGTH; j++)
    {
        if (str[j] == '\0')
            break;
        else
            string_length++;
    }

    return (string_length);
}