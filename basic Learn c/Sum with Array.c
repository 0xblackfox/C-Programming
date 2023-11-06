#include<stdio.h>
int main()
{
    int a[10],i,N,sum=0;
    printf("Enter the value=");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<N;i++)
        {
            sum=sum+a[i];
        }
        printf("the sum is %d ",sum);
}
