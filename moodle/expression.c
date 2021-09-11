/*JAYASANKAR SHYAM
S2 AD
ROLL NO : 40*/

#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    float total;
    printf("Enter the 7 values of the expression (a -b / c * d + e) * (f +g)) :");
    scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
    total=((a -b / c * d + e) * (f +g));
    printf("\nThe answer is %.2f\n",total);
    return 0;
}
