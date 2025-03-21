#include <stdio.h>
#define MAX_STRING_LENGTH 512

int main(void)
{

    // function Prototype
    void MyStrcat(char[], char[]);

    // variable declaration
    char chArray_One[MAX_STRING_LENGTH], chArray_Two[MAX_STRING_LENGTH];

    // code
    printf("\n\n");
    printf("Enter First String : \n\n");
    gets_s(chArray_One, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("Enter Second String : \n\n");
    gets_s(chArray_Two, MAX_STRING_LENGTH);

    //  ****String Concat
    printf("\n\n");
    printf("**********  BEFORE CONCATENATION    **********");
    printf("\n\n");
    printf("The Original First String Entered By You (i.e : 'chArray_One[]' Is : \n\n)");
    printf("%s\n", chArray_One);

    printf("\n\n");
    printf("The Original Second String Entered By You (i.e : 'chArray_Two[]' Is : \n\n)");
    printf("%s\n", chArray_Two);

    MyStrcat(chArray_One, chArray_Two);

    printf("\n\n");
    printf("    ********AFTER CONCATENATION ************");
    printf("\n\n");
    printf("'chArray_One[]' Is : \n\n");
    printf("%s\n", chArray_One);

    // strcat(chArray_Two, chArray_One);

    printf("\n\n");
    printf("'chArray_Two[]' Is : \n\n");
    printf("%s\n", chArray_Two);

    return (0);
}

void MyStrcat(char str_destination[], char str_source[])
{
    // function prototype
    int MyStrlen(char[]);

    // variable Declarations
    int iStringLength_Source = 0;
    int iStringLength_Destination = 0;
    int i, j;

    iStringLength_Source = MyStrlen(str_source);
    iStringLength_Destination = MyStrlen(str_destination);

    for (i = iStringLength_Destination, j = 0; j < iStringLength_Source; i++, j++)
    {
        str_destination[i] = str_source[j];
    }

    str_destination = '\0';
}

int MyStrlen(char str[])
{
    // variable Declarations
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