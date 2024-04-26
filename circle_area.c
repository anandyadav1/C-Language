#include<stdio.h>
int main() {
    float pi=3.4,r,area,circumtance;
    printf("Enter the value of r\n");  //r=radius
    scanf("%f,",&r);
    area=pi*r*r;
    circumtance=2*pi*r;
    printf("Area=%f\ncircumtance=%f",area,circumtance);
    return 0;
}