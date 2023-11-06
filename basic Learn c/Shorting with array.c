#include<stdio.h>
int main()
{
    int a[10],N,S,j,file=0;
    printf("Enter the value=");
    scanf("%d",&N);
    for(S=0;S<N;S++)
    {
        scanf("%d",&a[S]);
    }
    for(S=0;j<N;S++)
    {
        for(j=S+1;j<N;S++)
        {
            if(a[S]>a[j])
            {
                file=a[j];
                a[j]=a[S];
                a[S]=file;
            }
        }

    }
    for(j=0;j<N;j++)
    {
        printf("%d ",a[j]);
    }
    return 0;
}
