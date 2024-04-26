#include<stdio.h>
int main () {
    printf("Enter thr any number by user for Natural sum :\n");
    int i,n,sum=0,add;
    scanf("%d",&n);
    // int p=n;
    //Runs time sum value        slow run
    for(i=1; i<=n; i++) {
        sum=sum+i;
    }
    printf("The natural Number sum =%d\n",sum);

    //constant time run       fast run
    sum=(n*n+n)/2;
    printf("The natural Number sum =%d",sum);


    return 0;
}