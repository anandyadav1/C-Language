#include <stdio.h>

void printArray(int Arr1[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d  ", Arr1[i]);
    }
    printf("\n");
}

int partion(int Arr1[], int low, int high) 
// int partion(int Arr1, int low, int high) 
{
    int pivot = Arr1[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {

        while (pivot >= Arr1[i])
        {
            i++;
        }
        while ( pivot < Arr1[j] )
        {
            j--;
        }
        if (i < j)    //Compare Index
        {
            temp = Arr1[i];
            Arr1[i] = Arr1[j];
            Arr1[j] = temp;
        }
    } while (i < j);

    temp = Arr1[low];
    Arr1[low] = Arr1[j];
    Arr1[j] = temp;
    return j;
}

void quickSort(int Arr1[], int low, int high)
{
    int partionIndex; // Index of Pivot after Partions
    if (low < high)
    {
        partionIndex = partion(Arr1, low, high);
        quickSort(Arr1, low, partionIndex - 1);
        // Sort left subarray
        quickSort(Arr1, partionIndex + 1, high);
        // Sort right subarray
    }
}

int main()
{
    int Arr1[] = {45, 7, 45, 98, 23, 90, 34, 23, 45, 0};
    int n = 10;

    printf("Before sorting Array :\n");
    printArray(Arr1, n);

    printf("\nAfter Sorted Array :\n");
    quickSort(Arr1, 0, n-1);
    printArray(Arr1, n);

    return 0;
}