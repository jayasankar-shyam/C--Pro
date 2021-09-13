/*Jayasankar Shyam
S2 AD
Roll No : 40*/
#include <stdio.h>
long fact(int);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("\nThe factorial of %d is %ld \n",n,fact(n));
    return 0;
}
long fact(int n)
{
    if(n<=1)
        return 1;
    else
        return n*fact(n-1);
}

