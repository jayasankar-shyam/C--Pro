#include<stdio.h>
#include<string.h>
int main()
{
    int length,i;
    char temp, a[100];
    printf("Enter the word :");
    gets(a);
    length=strlen(a)-1;
    for(i=0;i<=length/2;i++)
    {
        temp=a[i];
        a[i]=a[length-i];
        a[length-i]=temp;
    }
    printf("The reversed word is %s ",a);
    return 0;
}