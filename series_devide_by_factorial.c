#include<stdio.h>
#include<math.h>
int main() {
int i,n,x,sum=0,fact=1;
printf("Enter the value of the n & x:- \n");
scanf(" %d%d",&n,&x);
for(i=1; i<=n; i++) {
    fact=fact*i;
    sum=sum+(pow(x,i)/fact);
}
printf("%d",sum);
return 0;
}