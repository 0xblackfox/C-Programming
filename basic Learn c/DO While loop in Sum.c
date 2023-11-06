#include <stdio.h>
int main()
{
    int number,sum=0,i=1;
     printf("Enter a number: ");
     scanf("%d", &number);
   do
    {

        sum =sum+i;
        i++;

    }
    while(number>=i);
    printf("The sum is %d ",sum);

}
