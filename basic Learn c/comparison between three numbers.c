#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d\n%d\n%d",&a,&b,&c);

    if(a>b&&a>c)
    {
        printf("a is greater than all",a);
    }
    else if(b>c && b>a)
    {
        printf("b is greater than all",b);
    }
    else
    {
        printf("C is greater than all",c);
    }
}
