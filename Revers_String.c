#include<stdio.h>

int main() {
    char A[]= "ANANDYADAV";
    char temp;
    int len=0;
    while(A[len]!= '\0') {
        len++;
    }
    printf("Array length :\n%d\n",len);
    for(int i=0; i<(len-1)/2; i++) {
        temp=A[i];
        A[i]=A[len-1-i];
        A[len-1-i]=temp;
    }
    printf("After revese String is :\n%s",A);
    return 0;
}