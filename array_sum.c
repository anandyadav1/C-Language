#include<stdio.h>
int main () {
    float a[10],sum=0;
    int i;
    printf("Enter the 10 values \n");
    for(i=0;i<10;i++)  {
        scanf("%f",&a[i]);
        sum=sum+a[i];
    }
    printf("sum=%f",sum);
    return 0;
    
}
