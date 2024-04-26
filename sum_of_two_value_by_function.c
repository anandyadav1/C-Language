#include<stdio.h>
void sum () {
    int a,b,sum=0;
    printf("Enter the any two number:\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
}
void main () {
    sum();
printf("\n");
    printf("Hello\n");
    sum();
}
