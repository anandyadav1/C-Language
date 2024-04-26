#include <stdio.h>
#include<math.h>
int main()
{
    int i, n, sum = 0, a;
    printf("Enter the value of a & n number\n");
    scanf("%d%d", &n,&a); // n=number
    for (i = 1; i <= n; i++)
    {
       sum=sum+pow(a,i);
    }
    printf("the sum of series by a^n:-%d",sum);
    return 0;
}