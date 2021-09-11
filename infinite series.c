/*Jayasankar Shyam
S2 AD
Roll No : 40*/
#include <stdio.h>
int main()
{
    float x,sum=1,temp=1,st;
    int i,n=100;
    printf("Enter the value of x : ");
    scanf("%f",&x);
    for (i=1;i<=n;i++)
    {
        temp=temp*x/(float)i;
        st=temp;
        sum=sum+temp;
        if((fabs(sum-st))<=0.000001)
        {
            break;
        }
    }
    printf("The sum of the series is %f\n",sum);
    return 0;
}
