#include <stdio.h>
int main(void)
{
    // variable Declarations
    float f;
    float f_num = 1.75f; // Simply change this value ONLY to get diffrent outputs...

    // code
    printf("\n\n");
    printf("Printing Numbers %f to %f : \n\n", f_num, (f_num * 10.0f));

    f = f_num;
    do
    {
        printf("\t%f\n", f);
        f = f + f_num;

    } while (f <= (f_num * 10.0f));

    printf("\n\n");
    return (0);
}