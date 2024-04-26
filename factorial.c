#include <stdio.h>
int main()
{
    int i, n, sum = 0, fact = 1;
    printf("Enter the any number\n");
    scanf("%d", &n); // n=number
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum = sum + fact;
    }
    printf("Given number of factorial:- %d", fact);
    return 0;
}