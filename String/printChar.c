#include<stdio.h>

int main() {
    char str[50] ="anandkumaryadavfdjsgkbbbn";
    printf("%d",strlen(str));
    printf("\n");

    char *ptr=str;
while ( *ptr != '\0')
    {
    printf("%c   ", *ptr);
    ptr++;
    }
    

    return 0;
}