#include<stdio.h>
#include<string.h>

int main() {
    char str [30][30] = {"sjfkjfkjgsjg", "sjgushgiuhgjf", "srjghsjehrthrut", "sdgkjdiuruesy", "jsndjghsjgh", "sljdgkjsgkjsk"};
    printf("%d", strlen(str));
    printf("\n");
    // for(int i=0; i<strlen(str); i++){
    for(int i=0; i<4; i++){

    printf("%s  ", str[i]);
    }
    printf("\n");
    printf("%c  ", str[3][0]);
    printf("%c   ", str[4][1]);
    printf("%c   ", str[5][2]);
    printf("\n");
    printf("%s   ",str[1] );
    printf("%s   ",str[3] );
    printf("%s   ",str[2] );
    printf("%s   ",str[4] );
    printf("%s   ",str[1] );
    printf("%s   ",str[2] );


    return 0;
}