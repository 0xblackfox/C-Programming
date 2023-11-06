#include<stdio.h>
int main()
{
    int i=1,j=5;
    while(i<=5)
    {
        for(j=5;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
        i++;
    }

}
