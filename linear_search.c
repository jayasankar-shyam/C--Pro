/*JAYASANKAR SHYAM
  ROLL NO:40
  S2 AD*/
#include <stdio.h>
int main()
{
    int a[100],n,temp,i,j,x;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("\nEnter the array elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nThe array : ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);5
    printf("\n");
    printf("\nEnter the element you want to search : ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
            if(a[i]==x)
            {
                printf("\n%d is at location %d\n",x,i+1);
                break;
            }
    if(i==n)
        printf("\n%d not found in the array\n",x);
    return 0;
}
