#include<stdio.h>
   int main(){
                    int sum=0,p,i;
                    printf("\n Perfect numbers between 1 and 100 are: ");
                    for(i= 1; i<= 100; i++){
                    p=1;
                    while(p<=(i/2)){
                    if(i % p == 0)
                    sum=sum+p;
                    p++;
                    }
                    if(sum==i)
                    printf(" %d ",i);
                    sum=0;
                    }
                    return 0;
                    }
