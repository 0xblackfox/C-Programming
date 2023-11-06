//Upper to lowercase letter without library function
#include<stdio.h>
int main()
{
    char upper;
    printf("Enter any uppercase letter: ");
    scanf("%c",&upper); // A=65


    printf("The lowercase letter: %c",upper+32);// A=97


    return 0;
}
