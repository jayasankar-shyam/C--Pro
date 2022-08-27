#include<stdio.h>
int main(){
    int count=0,i=0;
    char str[100],ch;
    printf("Enter a string : ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
    count++;
}
    printf("%d\n",count);
}

// 0 1 2 3 4 5
// h e l l o \0