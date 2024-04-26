#include <stdio.h>

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", A[i]);
    }
    printf("\n");
}

void Merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100]; // B[mid+1]
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        j++;
        k++;
    }

    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void MergeSort(int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        MergeSort(A, low, mid);
        MergeSort(A, mid + 1, high);
        Merge(A, mid, low, high);
    }
}

int main()
{
    // int A[] = {23, 89, 667, 23, 56, 90, 78};
    // int A[] = {1, 4, 6, 3, 7, 2, 5};
    int A[] = {23, 89, 667, 23, 56, 90, 0, 23, 78, 34, 0, 12};
    int n = 12;
    // int n = 7;

    printf("Before sorting Array :\n");
    printArray(A, n);
    printf("\n");

    printf("After Sorting Array :\n");
    MergeSort(A, 0, n - 1);
    printArray(A, n);

    return 0;
}