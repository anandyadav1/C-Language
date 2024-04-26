#include <stdio.h>

void printArray(int *A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", A[i]);
    }
    printf("\n");
}


void bubbleSort(int *A[], int n)
{
    int temp;
    for (int i = 0; i < n -1; i++) // This loop for number of passes
    {
        for (int j = 0; j < n - 1 - i; j++) // This loop for Comparission
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}


/*
void DiscardDuppalicate(int *A[], int n){
    int k;
    for(int i=0; i<n-1; i++){
        for(int j=1+i; j<n; j++){

        }
        if(A[i]!=A[j]){
            A[k]=A[i];
            j++;
            k++;
        }
    }

}
*/


void DiscardDuppalicate(int *A[], int n)
{
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1 + i; j < n-1; j++)
        {
            if (A[i] == A[j])
            {
                for (int k = j; k < n - 1; k++)
                {
                    A[k] = A[k + 1];
                }
                j--;
                n--;
            }
        }
    }
}

int main()
{

    int A[] = {3, 4, 3, 7, 9, 5, 2, 3, 4, 9, 7};
    int n = 11;

    printf("This is my Array element :\n");
    printArray(A, n);

    printf("\n");
    printf("Sorted Array :\n");
    bubbleSort(A, n);
    printArray(A, n);

    printf("\n");
    printf("No Duppalicate Element :\n");
    DiscardDuppalicate(A, n);
    printArray(A, n);
    return 0;
}