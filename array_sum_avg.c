/*JAYASANKAR SHYAM
  ROLL NO:40
  S2 AD*/
#include <stdio.h>
int main()
{
    int a[100],n,sum=0,i;
    float avg;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("\nSum of the numbers is: %d\n", sum);
    avg=(float)sum/n;
    printf("\nAverage of the numbers is %.2f\n", avg);
    return 0;
}
