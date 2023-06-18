#include<stdio.h>

int main()
{
    int i,j,N,key;
    scanf("%d",&N);
    int A[N];
    for(i=1;i<=N;i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d",&key);
    for(i=1;i<=N;i++)
    {
        for(j=i+1;j<=N;j++)
        {
            if(A[i]+A[j]==key)
            printf("numbers are %d and %d\n",A[i],A[j]);
        }
    }
}