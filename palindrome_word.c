#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,flag=0;
    char a[100];
    printf("Enter the word :");
    gets(a);
    len=strlen(a);
    for(i=0;i<=len/2;i++)
    {
        if(a[i]!=a[len-1-i])
        {
            flag=1;
            break;
        }
    }
    printf("\n");
    if(flag==1)
        printf("%s is not a palindrome word\n",a);
    else
        printf("%s is a palindrome word\n",a);
    return 0;
}
