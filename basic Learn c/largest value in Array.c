#include<stdio.h>
int main()
{
    int a[10];
    int i,N,sum=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
       scanf("%d",&a[i]);
    }
    int max=0;
    for(i=0;i<N;i++)
    {
        if(max<=a[i])
        {
            max=a[i];
        }
    }
    printf("The largest value is=%d",max);
}
