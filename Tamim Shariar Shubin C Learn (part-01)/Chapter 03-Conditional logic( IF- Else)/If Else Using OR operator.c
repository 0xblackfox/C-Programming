#include<stdio.h>
int main()
{
    int num;
    printf("Write a Number:\n");
    scanf("%d",&num);
    if(num>=0 || num>=10)
    {
        printf("yes \n");
    }
    else
    {
        printf("No \n");
    }
    return 0;
}
