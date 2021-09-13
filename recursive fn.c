#include <stdio.h>
long fact(int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%ld",fact(n));
    return 0;
}
long fact(int n)
{
    if(n<=1)
        return 1;
    else
        return n*fact(n-1);
}
