/*JAYASANKAR SHYAM
  ROLL NO:40
  S2 AD*/
#include<stdio.h>
int main()
{
    int i=0,c=0,v=0,s=0;
    char a[100];
    printf("Enter the word :");
    gets(a);
    while(a[i]!='$')
    {
        if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
        {
            if (a[i] == 'A' || a[i] == 'a' || a[i] == 'E' || a[i] == 'e' || a[i] == 'I' || a[i] == 'i' || a[i] == 'O' || a[i] == 'o' || a[i] == 'U' || a[i] == 'u')
                v++;
            else
                c++;
        }
        if(a[i]==' ')
                s++;
        i++;
    }
    printf("Number of vowels = %d\n",v);
    printf("Number of consonants = %d\n",c);
    printf("Number of spaces = %d\n",s);
    return 0;
}
