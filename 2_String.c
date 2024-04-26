#include<stdio.h>

int main() {
    char name[]="AnandYadav";
    int i=0;
    while(name[i]){
    printf("%c, ",name[i++]);
    }
    printf("\n");
    return 0;
}