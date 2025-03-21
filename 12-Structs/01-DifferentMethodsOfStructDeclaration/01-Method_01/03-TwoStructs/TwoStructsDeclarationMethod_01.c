#include <stdio.h>

// Defining STRUCT
struct MyPoint
{
    int x;
    int y;
} point; // declaring a Single variable of type 'struct MyPoint' globally...

// defiing STRUCT
struct MyPointProperties
{
    int quadrant;
    char axis_location[10];
} point_properties; // declaring a Single variable of type 'struct MyPointProperties' globally...

int main(void)
{
    // code
    // User Input For The Data Members of 'struct MyPoint' variable 'point_A'
    printf("\n\n");
    printf("Enter X-Coordinate For A Point : ");
    scanf("%d", &point.x);

    printf("Enter Y-Coordinate For A Point : ");
    scanf("%d", &point.y);

    printf("\n\n");
    printf("Point Co-ordinates (x,y) Are : (%d,%d) !!!\n\n", point.x, point.y);

    if (point.x == 0 && point.y == 0)
    {
        printf("The Point Is The Origin (%d,%d) !!!\n", point.x, point.y);
    }
    else
    {
        if (point.x == 0) // if X is Zero ...Obiviously Y is Non-Zero
        {
            if (point.y < 0) // if Y is -ve
            {
                strcpy(point_properties.axis_location, "Negative Y");
            }
            if (point.y > 0) // if Y is +ve
            {
                strcpy(point_properties.axis_location, "Positive Y");
            }
            point_properties.quadrant = 0;

            printf("The Point Lies On The %s Axis !!!\n\n", point_properties.axis_location);
        }
        else if (point.y == 0)
        {
            if (point.x < 0) // If X is -ve
            {
                strcpy(point_properties.axis_location, "Negative X");
            }
            if (point.y > 0) // if X is +ve
            {
                strcpy(point_properties.axis_location, "Positive X");
            }
            point_properties.quadrant = 0;

            printf("The Point Lies On The %s Axis !!!\n\n", point_properties.axis_location);
        }
        else // BOTH 'X' AND 'Y' ARE NON-ZERO
        {
            point_properties.axis_location[0] = '\0';

            if (point.x > 0 && point.y > 0) // X is +ve and Y is +ve
            {
                point_properties.quadrant = 1;
            }
            else if (point.x < 0 && point.y > 0) // X is -ve and Y is -ve
            {
                point_properties.quadrant = 2;
            }
            else if (point.x < 0 && point.y < 0) // X is -ve and Y is -ve
            {
                point_properties.quadrant = 3;
            }
            else // X is +ve and Y is -ve
            {
                point_properties.quadrant = 4;
            }

            printf("The Point Lies In Quadrant Number %d !!!\n\n", point_properties.quadrant);
        }
    }

    return (0);
}