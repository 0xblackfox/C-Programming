#include<stdio.h>
int main()

{

     char c ;
     int a,b,x;
     printf("Enter a number");
    scanf("%c",&c);
    printf("enter two number");
    scanf("%d%d",&a,&b);
    switch(c)
    {
    case 'a':
        x=a+b;
        printf("%d",x);
        break;
    case'b':

        x=a-b;
        printf("%d",x);
        break;
    case'c':
        x=a*b;
        printf("%d",x);
        break;
    case'd':
        x=a/b;
        printf("%d",x);
        break;
    default:
            printf("the process is erorr");
    }


}





