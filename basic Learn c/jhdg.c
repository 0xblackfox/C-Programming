#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter the value of n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
            j++;
        }
        printf("\n");
    }
    return 0;



}
