#include<stdio.h>
int main()
{
    int i=1,j;
    while(i<=3)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);

        }
        printf("\n");
        i++;

    }
}
