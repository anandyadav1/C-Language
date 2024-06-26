#include<stdio.h>
void checkPrime(int n){
    int flag=1;
    for(int i=2; i<n/2; i++){
        if(n % i==0){
            flag =0;
            break;
        }
    }
    if(flag){
        printf(" prime");
    }else{
        printf("not prime");

}
}
int main() {
    int m;
    printf("Enter the any number\n");
    scanf("%d", &m);
    checkPrime(m);
    return 0;
}