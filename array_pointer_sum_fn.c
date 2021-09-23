#include <stdio.h>
int sum(int *x, int n);
int main()
{
    int a[100], i, n, s = 0;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("\nEnter the elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }
    printf("Sum of array elements = %d ",sum(a,n));
}
int sum(int *x, int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum += *(x + i);
    return sum;
}