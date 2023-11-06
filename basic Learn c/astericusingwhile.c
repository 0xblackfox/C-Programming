#include<stdio.h>
int main()
{
    int i=1,j;
    while(i<=5)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");

        }
        printf("\n");
        i++;
    }
}
