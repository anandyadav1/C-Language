#include <stdio.h>
int main()
{
    int n, i, table;
    printf("Enter the any number for table:-\n");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        table=n*i;
        printf("%d*%d= %d\n", n, i, table);
    }
    return 0;
}
