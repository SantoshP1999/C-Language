#include <stdio.h>
#define MAX_STRING_LENGTH 512

int main(void)
{

    // function Prototype
    int MyStrlen(char[]);

    // variable declaration
    char chArray[MAX_STRING_LENGTH];
    int iStringLength;
    int count_A = 0, count_E = 0, count_I = 0, count_O = 0, count_U = 0;
    int i;

    // code
    //**********String INPUT */
    printf("\n\n");
    printf("Enter A String : \n\n");
    gets_s(chArray, MAX_STRING_LENGTH);

    //**********STRING OUTPUT */

    printf("The String Entered By You Is : \n\n)");
    printf("%s\n", chArray);

    iStringLength = MyStrlen(chArray);

    for (i = 0; i < iStringLength; i++)
    {
        switch (chArray[i])
        {
        case 'A':
        case 'a':
            count_A++;
            break;

        case 'E':
        case 'e':
            count_E++;
            break;

        case 'I':
        case 'i':
            count_I++;
            break;

        case 'O':
        case 'o':
            count_O++;
            break;

        case 'U':
        case 'u':
            count_U++;
            break;

        default:
            break;
        }
    }

    printf("\n\n");
    printf("In the String Entered By You ,The Vowels And The Number Of Their Occurences Are Follows : \n\n");

    printf("'A' Has Occured =%d Times !!!\n\n", count_A);
    printf("'E' Has Occured =%d Times !!!\n\n", count_E);
    printf("'I' Has Occured =%d Times !!!\n\n", count_I);
    printf("'O' Has Occured =%d Times !!!\n\n", count_O);
    printf("'U' Has Occured =%d Times !!!\n\n", count_U);

    return (0);
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
