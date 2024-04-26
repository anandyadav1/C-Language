#include<stdio.h>
int main() {
    int day;
     printf("Enter the day no\n");
     scanf(" %d",&day);
     printf("enter the day");
     switch(day) {
        case 1:
        case 2:
        printf("Weekend day");
        break;
        case 3:
        case 4:
        case 5: 
        case 6:
        case 7:
        printf("week day"); 
        break;
        default:
        printf("wrong choise");
     }
         return 0;   
}