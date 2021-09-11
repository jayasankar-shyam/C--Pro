/*Jayasankar Shyam
S2 AD
Roll No : 40*/
#include <stdio.h>
int main()
{
    int a,n,temp,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        a=n%10;
        sum=(sum*10)+a;
        n=n/10;
    }
    if(temp==sum)
        printf("%d is a PALINDROME number",temp);
    else
    printf("%d is not a PALINDROME number",temp);
    return 0;
}
