#include<stdio.h>
int fact(int n){
    int x=1;
    while(n>0){
        x*=n;
        n--;
    }
    return x;
}
int main()
{
    int n ;
    scanf("%d",&n);
    printf("\nThe factorial of %d is %d\n\n", n, fact(n));
}