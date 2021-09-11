//Program to check whether the entered number is even or odd
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("\nThe entered number '%d' is an even number.\n", num);
    else
        printf("\nThe entered number '%d' is an odd number.\n", num);
    return 0;
}
