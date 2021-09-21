/*  JAYASANKAR SHYAM
    S2 AD
    ROLL NO : 40*/
#include <stdio.h>
int main()
{
    int a[100];
    int n, *p, i;
    *p = a;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("\nEnter the elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }

    printf("\nArray elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");
    return 0;
}
