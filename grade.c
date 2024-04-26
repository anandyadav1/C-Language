#include<stdio.h>
int main() {
float a,b,c,d,e,sum,percentage;
printf("Enter the five subject marks\n");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
sum=a+b+c+d+e;
percentage=(sum/500)*100;
printf("%f",percentage); 
if(percentage>90 && percentage<=100) 
    printf("grade a");

elseif(percentage>80 && percentage<=90)  
    printf("Gade b");

elseif(percentage>60 && percentage<=80) 
    printf("Grade c");

elseif(percentage<=60) 
    printf("Grade d");

return 0;
}


