#include<stdio.h>
#include<string.h>
void main(){
    char str1[30]="Programming ";
    char str2[30]="in C";
    char str3[30]="in C";
    printf("\nLength of first string=%ld\n\n",strlen(str1));
    strcat(str1,str2);
   
    printf("Str1 before strcpy=%s\n",str1);
    strcpy(str1,str2);
    printf("Str1 after strcpy=%s\n",str1);

    printf("Strcmp value = %ld",strcmp(str1,str2));



}

//strlen()
// strcpy()
// strcat()
//strcmp()
