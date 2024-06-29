#include<stdio.h>
void Check(int n){
    if(n > 0){
        printf("Number is positive \n");
    }

    else if(n<0){
        printf("Number is Negative \n");
    }

    else{
        printf("Zero");
    }
}
int main() {
    int m;
    printf("Enter the any number \n");
    scanf("%d", &m);
   Check(m) ;
    return 0;
}