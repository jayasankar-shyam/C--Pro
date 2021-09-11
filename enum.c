#include <stdio.h>
int main()
{
    enum MONTH
    {
        Jan = 1,
        Feb,
        Mar
    };
    enum MONTH month = Mar;
    if (month == 1)
    {
        printf("Month is January\n");
    }
    else if (month == 2)
    {
        printf("Month is February\n");
    }
    else
    {
        printf("Month is March\n");
    }
    return 0;
}
