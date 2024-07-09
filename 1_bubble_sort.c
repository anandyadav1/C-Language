#include <stdio.h>

void printArray(int *arr1, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");
}


void bubbleSort(int *arr1, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) // This loop for number of passes
    {
        for (int j = 0; j < n - 1 - i; j++) // This loop for Comparission
        {
            // or
            // for(int j=5; j>0; j--)
            if (arr1[j] > arr1[j + 1])
            {
                temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }
}

int main()
{

    /*
        printf("Enter the 10 Element for the aaray :\n");
        int arr1[10];
        int q;
        for (q=0; q<10; q++){
        scanf("%d\t",&arr1[q]);
        }
    */

          //or

          
    int arr1[] = {23, 67, 56, 89, 34, 78, 89, 67, 98, 12};
    int n = 10;

    printf("Before sorting Array :\n");
    printArray(arr1, n);

    printf("\nAfter sorting Array :\n");
    bubbleSort(arr1, n);
    printArray(arr1, n);

    return 0;
}