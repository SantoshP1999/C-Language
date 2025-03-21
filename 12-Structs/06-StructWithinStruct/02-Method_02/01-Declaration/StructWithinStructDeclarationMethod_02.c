#include <stdio.h>>

struct MyPoint
{
    int x;
    int y;
};

struct Rectangle
{
    struct MyPoint point_01, point_02;
};

int main(void)
{
    // variable declarations
    int length, breadth, area;
    struct Rectangle rect;

    // code
    printf("\n\n");
    printf("Enter Leftmost X-Coordinate Of Recangle : ");
    scanf("%d", &rect.point_01.x);

    printf("Enter bottommost Y-Coordinate Of Recangle : ");
    scanf("%d", &rect.point_01.y);

    printf("Enter rightmost X-Coordinate Of Recangle : ");
    scanf("%d", &rect.point_02.x);

    printf("Enter Toptmost Y-Coordinate Of Recangle : ");
    scanf("%d", &rect.point_02.x);

    length = rect.point_02.y - rect.point_01.y;
    if (length < 0)
    {
        length = length * -1;
    }

    breadth = rect.point_02.x - rect.point_01.x;
    if (breadth < 0)
    {
        breadth = breadth * -1;
    }

    area = length * breadth;

    printf("\n\n");

    printf("Length Of Rectangle = %d\n\n", length);
    printf("Breadth Of Rectangle = %d\n\n", breadth);
    printf("Area Of Rectangle = %d\n\n", area);

    return (0);
}