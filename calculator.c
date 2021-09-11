//A simple calculator using C
#include <stdio.h>
int main()
{
    int a, b, choice;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf(" 1-Addition\n 2-Subtraction\n 3-Multiplication\n 4-Division\n 5-Modulo Division\nEnter your Choice : ");
    scanf("%d", &choice);
    if (choice == 1)
        printf("\n%d + %d = %d\n", a, b, a + b);
    else if (choice == 2)
        printf("\n%d - %d = %d\n", a, b, a - b);
    else if (choice == 3)
        printf("\n%d * %d = %d\n", a, b, a * b);
    else if (choice == 4)
        printf("\n%d / %d = %f\n", a, b, (float)a / b);
    else if (choice == 5)
        printf("\n%d %% %d = %d\n", a, b, a % b);
    else
        printf("\nInvalid Operation !\n");
    return 0;
}
