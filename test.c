#include <stdio.h>
int main()
{
    int a, flag = 0, i;
    printf("Enter a number : ");
    scanf("%d", &a);
    for (i = 2; i <= a / 2; i++)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("\n%d is not a prime number\n",a);
    else
        printf("\n%d is a prime number\n",a);
    return 0;
    }
