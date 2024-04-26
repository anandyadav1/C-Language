#include <stdio.h>

int main()
{
    printf("Enter the Input by User :\n");
    int n, rem;
    int arr1[50];
    int i = 0;
    scanf("%d", &n);
    int s = n;
    while (n)
    {
        rem = n % 2;
        n = n / 2;
        arr1[i] = rem;
        i++;
    }
    printf("The decimal number %d are conevert to the Binary number :\n", s);
    for (int j = i - 1; j >= 0; j--)
    {
        printf(" %d ", arr1[j]);
    }

    return 0;
}