#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
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