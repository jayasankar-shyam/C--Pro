#include <stdio.h>
#include <string.h>
int main()
{
    int len = 0, i = 0;
    char str[100], rev[100], ch;
    printf("Enter a string : ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len/2; i++)
    {
        if (str[i] !=str[len-1-i])
        {
            printf("%s is not a palindome\n", str);
            break;
        }
    }
    if(i==len/2)
        printf("%s is a palindome\n",str);
}