#include <stdio.h>
#include <string.h>
int main()
{
    int len = 0, i = 0;
    char str[100], rev[100], ch;
    printf("Enter a string : ");
    scanf("%s", str);
    len = strlen(str);
    while (str[i] != '\0')
    {
        rev[i] = str[len - i - 1];
        i++;
    }
    printf("Original String = %s\nReverse String =%s\n", str, rev);

    for (i = 0; i < len; i++)
    {
        if (str[i] != rev[i])
        {
            printf("%s is not a palindome\n", str);
            break;
        }
    }
    if(i==len)
        printf("%s is a palindome\n",str);
    // if(strcmp(str,rev)==0)
    //     printf("%s is a palindome\n",str);
    // else
    //     printf("%s is not a palindome\n",str);
}