#include <stdio.h>
int main()
{
    int i=1,s=0,n;
    scanf("%d",&n);
    while(i<=n)
    {
        s+=i;
        i++;
    }
    printf("Sum is %d",s);
    return 0;

}
