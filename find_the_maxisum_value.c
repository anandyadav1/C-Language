#include <stdio.h>
int main()
{
    int a[10], max;
    int i;
    printf("Enter the 10 value \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 0; i < 10; i++)
    {
        // scanf("%f",&a[i]);
    if (max < a[i])
    {
        max = a[i];
    }
    printf("max=%d", max); 
    }
    return 0;
}
