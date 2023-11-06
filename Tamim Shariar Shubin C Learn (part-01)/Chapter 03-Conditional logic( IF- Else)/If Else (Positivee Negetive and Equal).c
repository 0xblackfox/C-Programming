#include<stdio.h>
int main()
{
    int n;
    printf("Write a number\n");
    scanf("%d",&n);
    if(n<0){
        printf("The number is negetive\n");
    }
    else if (n>0){
        printf("The number is positive");
    }
    else if(n==0){
        printf("The number is zero!");
    }
     return 0;
}
