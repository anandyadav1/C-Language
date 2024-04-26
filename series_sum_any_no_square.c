#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter the any number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + pow(i, 2);
    }
    printf("The series any term square of sum:-%d", sum);
    return 0;
}