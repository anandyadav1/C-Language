#include <stdio.h>

void PrintArray(char A[] ,int len)
{
    
    for (int i = 0; i < len; i++)
    {
        printf("%c   ", A[i]);
    }
    printf("\n");
}
void hi(char A[])
{
    int i = 0;
    while (A[i])
    {
        printf("%d, ", A[i++]);
    }
    printf("\n");
}

void BubbleSort( char A[], int len){
    for(int i=0; i<len-1; i++){
        for(int j=0; j<len-1-i; j++){
            if(A[j]<A[j+1]){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}


int main()
{
    char A[] = {'a', 'n', 'a', 'n', 'd', 'y', 'a', 'd', 'a', 'v', '\0'};
    int len = sizeof(A);

     PrintArray(A,len);
     printf("\n");
     hi(A);
     printf("\n");
     BubbleSort(A, len);
     hi(A);
     printf("\n");
     PrintArray(A,len);
    return 0;
}