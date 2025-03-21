#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *envp[])
{
    // variable Declarations
    int i;

    // code
    if (argc != 4)
    {
        printf("\n\n");
        printf("Invalid Usage !!! Exitting Now...\n\n");
        printf("Usage : CommandLineArgumentsApplication <first name> <middle name> <surname>\n\n");
        exit(0);
    }

    printf("\n\n");
    printf("Your Full Name Is : ");
    for (i = 1; i < argc; i++)
    {
        printf("%s ", argv[i]);
    }

    printf("\n\n");

    return (0);
}