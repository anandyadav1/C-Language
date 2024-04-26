#include<stdio.h>
int main() {
    float a,b,c,d,e,sum,p;
    printf("Enter the five subject\n");                
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
sum=a+b+c+d+e;
p=(sum/500)*100;
printf("Percentage=%f",p);
return 0;
}
