#include<stdio.h>
int main() {
    int year;
    printf("Ennter the any year\n");
    scanf("%d",&year);
    if ((year%4==0)&&(year%100!=0)||(year%400==0)) 
      {
       printf("year is leap year");
      }
    else 
    
        printf("yesr is not leap year");
      
    return 0;
    
}