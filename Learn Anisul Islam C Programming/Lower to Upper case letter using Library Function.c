#include<stdio.h>
int main()
{
    int lower,upper;
    printf("enter a lowercase number:");
    scanf("%c",&lower);

    upper = toupper(lower);
    printf("The uppercase number is :%c \n",upper);


    return 0;
}
