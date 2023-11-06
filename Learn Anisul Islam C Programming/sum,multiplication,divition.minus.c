#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("enter two number=");
    scanf("%d %d",&num1,&num2);

    result=num1+num2;
    printf("sum=%d \n",result);

    result=num1-num2;
    printf("minus=%d \n",result);

    result=num1*num2;
    printf("multiplication=%d \n",result);

    result= num1/num2;
    printf("divition=%f \n",result);

    return 0;
}
