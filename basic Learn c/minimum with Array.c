#include<stdio.h>
int main()
{
    int a[10];
    int i,N,sum=0;
    printf("write a number what you need=");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
       scanf("%d",&a[i]);
    }
    int small=0;
    for(i=0;i<N;i++)
    {
        if(small>=a[i])
        {
            small=a[i];
        }
    }
    printf("The Smallest value is=%d",small);
}
