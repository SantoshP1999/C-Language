#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    // function prototype
    int MyStrlen(char[]);
    void MyStrCpy(char[], char[]);

    // variable Declarations
    char chArray[MAX_STRING_LENGTH];
    int iStringLength;
    int i;
    int word_count = 0, space_count = 0;

    // code

    //  ****** STRING INPUT *******
    printf("\n\n");
    printf("Enter A String : \n\n");
    gets_s(chArray, MAX_STRING_LENGTH);

    iStringLength = MyStrlen(chArray);

    // iStringLength = MyStrlen(chArray);

    for (i = 0; i < iStringLength; i++)
    {
        switch (chArray[i])
        {
        case 32:
            space_count++;
            break;

        default:
            break;
        }
    }

    word_count = space_count + 1;

    //  ********STRING OUTPUT ******
    printf("\n\n");
    printf("String Entered By You Is : \n\n");
    printf("%s\n", chArray);

    printf("\n\n");
    printf("Number Of Spaces In The Input String =%d\n\n", space_count);
    printf("Number Of Words In The Input String =%d\n\n", word_count);

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
