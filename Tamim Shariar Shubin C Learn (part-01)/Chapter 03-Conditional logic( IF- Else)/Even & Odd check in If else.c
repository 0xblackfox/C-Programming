#include<stdio.h>
int main()
{
    int num,value;
    printf("Write a number:\n");
    scanf("%d",&num);
    value=num%2;
    if(value==0)
    {
        printf("The number is even");
    }
    else {
        printf("the number is odd");
    }
    return 0;
}
