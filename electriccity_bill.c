#include<stdio.h>
int main() {
    float unit,amount;
    printf("Enter the total unit\n");
    scanf(" %f",&unit);
    if(unit<=100) {
        amount=unit*2.5;
    }
    if(unit>100 && unit<=200) {
        amount=100*2.5+((unit-100)*3.5);
    }
    if(unit>200 && unit<=300) {
        amount=((100*2.5)+(100*3.5)+(unit-200)*4.5);
    }
    if(unit>300) {
        amount=((100*2.5)+(100*3.5)+(100*4.5)+(unit-300)*5.5);
    }
    printf(" %f",amount);
    return 0;
}
