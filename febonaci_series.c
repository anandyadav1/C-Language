#include<stdio.h>
int main() {
    int i,n,fib0,fib1,fibn;
    printf("Enter the any no\n");
    scanf(" %d",&n);
    fib0=0;
    fib1=1;
    printf(" %d %d",fib0,fib1);
    for(i=2;i<=n;i++) {
    fibn=fib0+fib1;
    printf(" %d",fibn);
     fib0=fib1;
     fib1=fibn;
    }
    printf("\nFibonachee=%d",fibn);
    return 0;
}