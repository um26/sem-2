#include<stdio.h>

int main()
{
    int i,j,N;
    int count=0;
    scanf("%d",&N);
    int A[N];
    for(i=1;i<=N;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=1;i<=N;i++)
    {
        for(j=i+1;j<=N;j++)
        {
            if(A[i]==A[j]){
            printf("number is %d\n",A[i]);
            count++;
                
            }
        }
    }
    printf("%d",count);
}