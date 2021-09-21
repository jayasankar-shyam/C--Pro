/*  JAYASANKAR SHYAM
    S2 AD
    ROLL NO : 40*/
#include <stdio.h>
int main()
{
    //add
    int a, b,x,y,*p,*q,sum;
    printf("------Program to add------\n\n");
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    p = &a;
    q = &b;
    sum = *p + *q;
    printf("Sum :  %d + %d = %d\n", a,b,sum);

    //swap
    printf("\n------Program to swap------\n\n");
    printf("Enter the first number(x): ");
    scanf("%d", &x);
    printf("Enter the second number(y): ");
    scanf("%d", &y);
    swap(&x,&y);
    printf("\nAfter Swapping: x = %d, y = %d\n", x, y);

}
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
