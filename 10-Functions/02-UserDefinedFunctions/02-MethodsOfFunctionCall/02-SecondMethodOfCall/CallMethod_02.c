#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    // function prototypes
    void display_information(void);
    void Function_Country(void);

    // code
    display_information();
    Function_Country();

    // code
    display_information(); // Function call
    Function_Country();    // Function call

    return (0);
}

void display_information(void) // function definition
{
    // function prototypes
    void Function_My(void);
    void Function_Name(void);
    void Function_Is(void);
    void Function_FirstName(void);
    void Function_MiddleName(void);
    void Function_Surname(void);
    void Function_OfAMC(void);

    // code

    //      *************FUNCTION CALLS     ***************8
    Function_My();
    Function_Name();
    Function_Is();
    Function_FirstName();
    Function_MiddleName();
    Function_Surname();
    Function_OfAMC();
}

void Function_My(void) // function definition
{
    // code
    printf("\n\n");
    printf("My");
}

void Function_Name(void) // function definition
{
    // code
    printf("\n\n");
    printf("Name");
}

void Function_Is(void) // function Definition
{
    // code
    printf("\n\n");
    printf("Is");
}

void Function_FirstName(void) // function definition
{
    // code
    printf("\n\n");
    printf("Santosh");
}

void Function_MiddleName(void) // function Definition
{
    // code
    printf("\n\n");
    printf("Balu");
}

void Function_Surname(void) // function Definition
{
    // code
    printf("\n\n");
    printf("Phatangare");
}

void Function_OfAMC(void) // function deinition
{
    // code
    printf("\n\n");
    printf("Of ASTROMEDICOMP");
}

void Function_Country(void)     //function definition
{
    printf("\n\n");
    printf("I live In India. ");
    printf("\n\n");
}