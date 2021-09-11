#include<stdio.h>
#include<string.h>
int main()
{
    char text[100];
    int length,i;
    printf("Enter the text : ");
    gets(text);
    length=strlen(text);
    printf("\nString Length =%d\n",length);
    for(i=15;i<length;i++)
        printf("\n%c",text[i]);
    return 0;
}
