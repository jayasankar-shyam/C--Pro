/*Jayasankar Shyam
    S2 AD
    Roll no : 40*/
#include<stdio.h>
int main()
{
    int month;
    printf("Enter the choice \n 1-January ,2-February ,3-March ,4-April ,5-May ,6-June ,7-July ,8-August ,9-September ,10-October ,11-November ,12-December\n");
    scanf("%d",&month);
    switch(month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\nThe selected month has 31 days");
        break;
    case 2:
        printf("\nThe selected month has 28/29 days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("\nThe selected month has 30 days");
        break;
    default:
        printf("\nInvalid Input");
    }
    return 0;
}

