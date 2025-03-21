#include <stdio.h>
#include <conio.h>

// ASCII Values for 'A' to 'Z'
#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

// ASCII Values for 'a' to 'z'
#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

// ASCII value For '0' to '9'
#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DIGIT_ENDING 57

int main(void)
{
    // variable Declarations
    char ch;
    int ch_value;

    // code
    printf("\n\n");

    printf("Enter Character : ");
    ch = getch();

    printf("\n\n");

    switch (ch)
    {
    case 'A':
    case 'a':

    case 'E':
    case 'e':

    case 'I':
    case 'i':

    case 'O':
    case 'o':

    case 'U':
    case 'u':
        printf("Character \'%c\' Entered By You, Is a VOWEL CHARACTER From the English Alphabet !!!\n\n", ch);
        break;

    default:
        ch_value = (int)ch;

        if ((ch_value >= CHAR_ALPHABET_LOWER_CASE_BEGINNING && ch_value <= CHAR_ALPHABET_LOWER_CASE_ENDING) || (ch_value >= CHAR_ALPHABET_LOWER_CASE_BEGINNING && ch_value <= CHAR_ALPHABET_LOWER_CASE_ENDING))
        {
            printf("Character \'%c\' Entered by You, Is A CONSONENT CHARACTER From The English Alphabet !!!\n\n", ch);
        }
        else if (ch_value >= CHAR_DIGIT_BEGINNING && ch_value <= CHAR_DIGIT_ENDING)
        {
            printf("Character \'%c\' Entered By You, Is A DIGIT CHARACTER !!!\n\n", ch);
        }
        else
        {
            printf("Character \'%c\' Entered By You, Is A SPECIAL CHARACTER !!!\n\n", ch);
        }
        break;

        printf("switch case Block Complete !!!\n");
    }
    return (0);
}
