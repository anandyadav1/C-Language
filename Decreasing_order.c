#include <stdio.h>
int main()
{
    int a[7], i, j, temp;
    printf("Enter the 7 element\n");
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Stored array in decreasing order:- \n");
    for (i = 0; i < 7; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}