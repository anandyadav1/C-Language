#include<stdio.h>
void factor(int num){
    if(num == 0){
        return;
    }

int i=1;
    while (num != 0)
    {
        if(num % i== 0){
            printf("%d  ", i);
        }
        i++;
    }
    factor(num-1);
    
}

int main() {
    printf("Enter the any number for factor:\n");
    int m ,n;
    scanf("%d", &m);
    factor(m);
    return 0;
}