#include<stdio.h>

void printArray( int *arr1, int n) 
{
    for( int i=0; i<n-1; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\n");
}

void insertionSort(int *arr1, int n) {
    int kye,j;
    for(int i=1; i<=n-1; i++) {
        kye =arr1[i];
        j=i-1;
        while (j>=0 && arr1[j]>kye) {
            arr1[j+1] = arr1[j];
            j--;
        }
        arr1[j+1] =kye;
    }
}
int main() {
    
    int arr1[]={34, 67, 23, 78, 96, 45, 67, 98};
    int n=8;
    printf("Before sorted Array :\n");
    printArray(arr1,n);
    insertionSort(arr1, n);
    printf("\nAfter sorting Array :\n");
    printArray(arr1, n);

    return 0;
}