/*  JAYASANKAR SHYAM
    S2 AD
    ROLL NO : 40*/
#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    //add
    int a, b, *p, *q,sum;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    p = &a;
    q = &b;
    sum = *p + *q;
    printf("Sum :  %d + %d = %d\n", a, b, sum);

    printf("\n------Program to swap------\n\n");
    printf("\nbefore Swapping: x = %d, y = %d\n", a, b);
    swap(p, q);
    printf("\nAfter Swapping: x = %d, y = %d\n", a, b);
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}
