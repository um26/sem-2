//insertion

#include<stdio.h>

int main()
{
    int i, j, N, temp;
    scanf("%d", &N);
    int A[N];
    for(i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    
    for(i = 1; i < N; i++)
    {
        temp = A[i];
        j = i - 1;
        
        while(j >= 0 && A[j] > temp)
        {
            A[j + 1] = A[j];
            j--;
        }
        
        A[j + 1] = temp;
        
        for(int k = 0; k < N; k++)
    {
        printf("%d\t", A[k]);
    }
    printf("\n");
    }

    return 0;
}