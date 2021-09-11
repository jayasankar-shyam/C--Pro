#include<stdio.h>
int main()
{
    int y;
    printf("Enter the year : ");
    scanf("%d",&y);
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
                printf("%d is a Leap year",y);
            else
                printf("%d is a not a Leap year",y);
        }
        else
            printf("%d is a Leap year",y);
    }
    else
                printf("%d is a not a Leap year",y);
    return 0;

}
