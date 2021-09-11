/*Jayasankar Shyam
S2 AD
Roll No : 40*/

#include <stdio.h>
int main()
{
    int x,i,flag=0;
    printf("Enter a positive integer : ");
    scanf("%d",&x);
    for (i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("\n%d is not a prime number\n",x);
    else
        printf("\n%d is a prime number\n",x);
    return 0;
}
