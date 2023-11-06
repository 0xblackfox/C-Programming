#include<stdio.h>
int main()
{
    int X,Y,Z;
    char sign;
    printf("Enter a first number:");
    scanf("%d",&X);
    printf("Enter a first number:");
    scanf("%d",&Y);
    Z=X+Y;
    sign='+';
    printf("%d %c %d= %d\n",X,sign,Y,Z);
     Z=X-Y;
      sign='-';
    printf("%d %c %d= %d\n",X,sign,Y,Z);
     Z=X*Y;
      sign='*';
    printf("%d %c %d= %d\n",X,sign,Y,Z);
     Z=X/Y;
      sign='/';
    printf("%d %c %d= %d\n",X,sign,Y,Z);
    return 0;




}
