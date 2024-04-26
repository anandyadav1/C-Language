#include<stdio.h>
int main() {
int a,b,temp;     //temp->temprory variable
printf("Enter two no\n");
scanf("%d%d",&a,&b); 
printf("before swap:-\na=%d\nb= %d\n",a,b);
temp=a;
a=b;
b=temp;
printf("After swap:-\na=%d\nb=%d\n",a,b);
return 0;

}
