#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("enter the value :\n");
    scanf("%d",&n);
    printf("factorial of %d is :%d",n,fact(n));
}
int fact(int n){
    if(n>=1)
        return n*fact(n-1);
    else
        return 1;
}