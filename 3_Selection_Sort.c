#include <stdio.h>

void printArray(int *arr1, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");
}

void selectionSort(int *arr1, int n)
{
    int indexOfMin, temp;
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr1[indexOfMin > arr1[j]])
            {
                indexOfMin = j;
            }
        }
        temp = arr1[i];
        arr1[i] = arr1[indexOfMin];
        arr1[indexOfMin] = temp;
    }
}
int main()
{

    int arr1[] = {34, 67, 23, 78, 96, 45, 67, 98};
    int n = 8;
    printf("Before sorted Array :\n");
    printArray(arr1, n);
    selectionSort(arr1, n);
    printf("\nAfter sorting Array :\n");
    printArray(arr1, n);

    return 0;
}