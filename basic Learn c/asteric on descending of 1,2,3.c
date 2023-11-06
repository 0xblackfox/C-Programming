#include<stdio.h>
int main()
{
    int i=1,j;
    while(i<=5)
    {
        for(j=5;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
        i++;
    }
}
