#include<stdio.h>
int main() {
    int n,r,sum=0,temp;   //n=Number    ,  r=Remainder
    printf("Enter the any digit no \n");
    scanf("%d",&n); 
    temp=n; 
     while(n>0)      {
    r=n%10;
    sum=sum+r;
    n=n/10;
    }
     printf("%d",sum);
    
    return 0;
}