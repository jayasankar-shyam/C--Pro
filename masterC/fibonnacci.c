#include<stdio.h>
int fibo(int x){
    if(x==0||x==1)
        return x;
    else 
        return(fibo(x-2)+fibo(x-1));
}
int main(){
    int i=0,n=10,x=200;
    // for(i=0;i<n;i++)
    //     printf("%d ",fibo(i));
    while(fibo(i)<=x){
        printf("%d ",fibo(i++));

    }
}