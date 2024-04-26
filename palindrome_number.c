#include<stdalign.h>
int main() {
    int num,r,reverse=0,temp;
    printf("Enter the any number\n");
    scanf("%d",&num);
    temp=num;
    while(num!=0) {
        r=num%10;
        reverse=(reverse*10)+r;
        num=num/10;
    }
    if(temp==reverse) {
        printf("Number is palindrome\n");
    }
    else {
        printf("Number is not palindrome");
    }
    return 0;
    
}