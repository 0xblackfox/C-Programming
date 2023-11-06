#include<stdio.h>
int main()
{
   int n;
   int i;
   scanf("%d",&n);
   for(i=1;i<=10;i=i++)
   {
       printf("%d X %d =%d\n",n,i,n*i);
       i=i+1;
   }


    return 0;
}
