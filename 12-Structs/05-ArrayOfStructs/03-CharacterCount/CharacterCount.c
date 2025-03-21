#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_STRING_LENGTH 1024

struct CharacterCount
{
    char ch;
    int ch_count;
} character_and_count[] = {
    {'A', 0},
    {'B', 0},
    {'C', 0},
    {'D', 0},
    {'E', 0},
    {'F', 0},
    {'G', 0},
    {'H', 0},
    {'I', 0},
    {'J', 0},
    {'K', 0},
    {'L', 0},
    {'M', 0},
    {'N', 0},
    {'O', 0},
    {'P', 0},
    {'Q', 0},
    {'R', 0},
    {'S', 0},
    {'T', 0},
    {'U', 0},
    {'V', 0},
    {'W', 0},
    {'X', 0},
    {'Y', 0},
    {'Z', 0}};

#define SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS sizeof(character_and_count)
#define SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCTS sizeof(character_and_count[0])
#define NUM_ELEMNTS_IN_ARRAY (SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS / SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCTS)

// Entry Point Function
int main(void)
{
    // variable declarations
    char str[MAX_STRING_LENGTH];
    int i, j, actual_string_length = 0;

    // code
    printf("\n\n");
    printf("Enter A String : \n\n");
    gets_s(str, MAX_STRING_LENGTH);

    actual_string_length = strlen(str);

    printf("\n\n");
    printf("The String Youn Have Entered Is : \n\n");
    printf("%s\n\n", str);

    for (i = 0; i < actual_string_length; i++)
    {
        for (j = 0; j < NUM_ELEMNTS_IN_ARRAY; j++)
        {
            str[i] = toupper(str[i]);

            if (str[i] == character_and_count[j].ch)
            {
                character_and_count[j].ch_count++;
            }
        }
    }

    printf("\n\n");
    printf("The Number Of Occurences Of All Characters_an_count From The Alphabet Are As Follows : \n\n");
    for (i = 0; i < NUM_ELEMNTS_IN_ARRAY; i++)
    {
        printf("Character %c = %d\n", character_and_count[i].ch, character_and_count[i].ch_count);
    }
    printf("\n\n");

    return (0);
}
