/*JAYASANKAR SHYAM
  ROLL NO:40
  S2 AD*/
#include <stdio.h>
int main()
{
    int a[100],n,temp,i,j;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("\nEnter the array elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nOriginal array : ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    for(i=0;i<n;i++)
        for(j=0;j<n-1;j++)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    printf("\n");
    printf("\nSorted array : ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
