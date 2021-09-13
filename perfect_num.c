/*JAYASANKAR SHYAM
  ROLL NO:40
  S2 AD*/
#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("\nThe perfect numbers in the range 1 to 100 are ");
    for(i=1;i<=100;i++)
    {
        n=1;
        while(n<=(i/2))
        {
            if(i%n==0)
                sum+=n;
                n++;
        }
    if(sum==i)
        printf(" %d ,",i);
    sum=0;
    }
    printf("\n");
    return 0;
}
