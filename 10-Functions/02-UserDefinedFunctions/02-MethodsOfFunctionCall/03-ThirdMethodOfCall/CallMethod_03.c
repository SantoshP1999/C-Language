#include <stdio.h> //contains declarations of 'printf()'

int main(int argc, char *argv[], char *envp[])
{
    // function prototypes
    void Function_Country();

    // code
    Function_Country();
    return (0);
}

void Function_Country(void) // function Definition
{
    // function Declatration
    void Function_OfAMC(void);

    // code
    Function_OfAMC();

    printf("\n\n");
    printf("I Live in India.");
    printf("\n\n");
}

void Function_OfAMC(void) // function Definition
{
    // function Declaration
    void Function_Surname(void);

    // code
    Function_Surname();
    printf("\n\n");
    printf("Of ASTROMEDICOMP");
}

void Function_Surname(void) // function Definition
{
    // function declaration
    void Function_MiddleName(void);

    // code
    Function_MiddleName();
    printf("\n\n");
    printf("Phatangare");
}

void Function_MiddleName(void) // function Definition
{
    // function declaration
    void Function_FirstName(void);

    // code
    Function_FirstName();
    printf("\n\n");
    printf("Balu");
}

void Function_FirstName(void) // function Definition
{
    // function declaration
    void Function_Is(void);

    // code
    Function_Is();
    printf("\n\n");
    printf("Santosh");
}

void Function_Is(void) // function Definition
{
    // function declaration
    void Function_Name(void);

    // code
    Function_Name();
    printf("\n\n");
    printf("is");
}

void Function_Name(void) // function Definition
{
    // function declaration
    void Function_My(void);

    // code
    Function_My();
    printf("\n\n");
    printf("Name");
}

//**************User-Defined Functions Definitions...**** */

void Function_My(void) // function Definition
{
    // code
    printf("\n\n");
    printf("My");
}