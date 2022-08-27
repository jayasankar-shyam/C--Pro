#include <stdio.h>
int fact(int x)
{
    if (x == 0)
        return 1;
    else
        return (x * fact(x - 1));
}
int main()
{
    int n = 5;
    printf("The factorial of %d is %d", n, fact(n));
}