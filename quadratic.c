/*Jayasankar Shyam
    S2 AD
    Roll no : 40*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float r1,r2,ri,d;
    printf("Enter the coefficients a,b,c of QE (aX^2 + bX+ c): " );
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("\nThe 2 distinct and real roots are %.2f and %.2f\n",r1,r2);
    }
    else if(d<0)
    {
        r1=r2= -b/(2*a);
        ri=sqrt(-d)/(2*a);
        printf("\nThe 2 distinct and complex roots are %.2f + %.2f i and %.2f - %.2f i\n",r1,ri,r2,ri);
    }
    else
    {
        r1=r2= -b/(2*a);
        printf("\nThe 2 equal and real roots are %.2f and %.2f\n",r1,r2);
    }
    return 0;
}
