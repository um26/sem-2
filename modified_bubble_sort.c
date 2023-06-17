//modified bubble sort

#include<stdio.h>

int main()
{
    int i,j,k,N,temp,flag;
    scanf("%d",&N);
    int A[N];
    for(i=1;i<=N;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<N-1;i++)
    {
        flag=0;
        for(j=0;j<=N-1-i;j++)
        {
           if(A[j]>A[j+1])
           {
               temp=A[j];
               A[j]=A[j+1];
               A[j+1]=temp;
               flag=1;
           }
        }
        
        if(flag==0) {
            printf("array is sorted");
            break;
        }
        for(k=1;k<=N;k++)
    {
    printf("%d\t",A[k]);
    }
    printf("\n");
        
    }
    
    
}