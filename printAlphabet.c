#include<stdio.h>
void capitalAlphabet(){
    for(int i=65; i<90; i++){
        printf("%c  ", i);
    }
printf("\n");
}

void smallAlphabet(){
    for(int i=97; i<122; i++){
        printf("%c  ", i);
    }
}
int main() {
    capitalAlphabet();
    smallAlphabet();
    printf("%d",0);
    return 0;
}