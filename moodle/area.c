/*JAYASANKAR SHYAM
S2 AD
ROLL NO : 40*/

#include<stdio.h>
#define PI 3.14
int main()
{
    float r,area;
    printf("Enter the radius : ");
    scanf("%f",&r);
    area=PI*r*r;
    printf("\nArea of the circle with radius %.2f is %.2f\n",r,area);
    return 0;
}
