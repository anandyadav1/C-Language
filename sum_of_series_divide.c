#include <stdio.h>
#include<math.h>
int main()
{
    int i, n, x, sum = 0;
    printf("Enter the value of x & n number\n");
    scanf("%d%d", &n, &x); // n=number   ,x=variable
    for (i = 1; i <= n; i++)
    {
        sum = sum + pow ((x, i) / i);
    }
    printf("The series of sum:- %d", sum);
    return 0;
}