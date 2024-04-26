#include<stdio.h>
int main()
 {
    float a,b,c,d,e,sum,avg;
    printf("Enter the five no\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    avg=sum/5;
    printf("%f",avg);
    return 0;
    }
