
//selection sort
#include<stdio.h>

int main()
{
    int i,j,N,min;
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if (A[j] < A[i])
            {
                min = A[j];
                A[j] = A[i];
                A[i] = min;
            }
        }
        
        for(j=0;j<N;j++)
        {
        printf("%d\t",A[j]);
        }
        
        printf("\n");
    }
}