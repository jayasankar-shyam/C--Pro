/*  JAYASANKAR SHYAM
    S2 AD
    ROLL NO : 40*/
#include <stdio.h>
#include <math.h>

int main()
{
    struct Point
    {
        int x;
        int y;
    };
    int i;
    float dist;
    struct Point point[2];

    printf("Enter the first point(x1,y1) : ");
    scanf("%d,%d", &point[0].x, &point[0].y);
    printf("Enter the second point(x2,y2) : ");
    scanf("%d,%d", &point[1].x, &point[1].y);
    dist = sqrt(pow((point[1].x - point[0].x), 2) + pow((point[1].y - point[0].y), 2));
    printf("\nDistance between the points = %.2f\n", dist);
    return 0;
}
