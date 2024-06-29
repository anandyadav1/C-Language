#include<stdio.h>

void Check(char ch){
    if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u'){
        printf("This character is vowel\n");
    } else{
        printf("This character is consonent \n");
    }

}

int main() {
    char ch;
    printf("Enter the any character digit \n");
    scanf("%c", &ch);
    Check(ch);
    return 0;
}