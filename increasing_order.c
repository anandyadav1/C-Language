#include <stdio.h>
int main()
{
    int a[5], i, j, temp;
    printf("Enter the 5 element\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Stored array \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}