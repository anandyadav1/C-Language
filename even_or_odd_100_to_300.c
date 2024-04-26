#include<stdio.h>
int main() {
    int n,i=1,even_sum=0,odd_sum=0;
    printf("Enter the any no\n");
    scanf(" %d",&n);
    while (i<=n) {
        if(i%2==0) {
            even_sum=even_sum+i;  
        }
        else {
            odd_sum=odd_sum+i;
         }
         i++;

    }
        
   printf(" the sum of even number from 1 to 100 is: %d\n",even_sum);
   printf(" the sum of odd number from 1 to 100 is:  %d",odd_sum);
   

        
    return 0;
    
}