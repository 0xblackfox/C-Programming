#include<stdio.h>
int main()
{
    int upper,lower;
    printf("enter a uppercase number:");
    scanf("%c",&upper);

    lower = tolower(upper);
    printf("The lowercase number is :%c \n",lower);


    return 0;
}
