#include<stdio.h>
int main()
{
    int number,N=1,Mul;
    printf("enter a number:");
    scanf("%d",&number);
    do

{
    Mul=N*number;
      printf("%d * %d =%d\n",number,N,Mul);
    N++;

    }
    while(N<=10);

}
