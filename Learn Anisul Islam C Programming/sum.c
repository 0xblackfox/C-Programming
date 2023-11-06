#include<stdio.h>
int main()
{
    int X,Y,Z,sum;
    float avrg;
    printf("enter three number=");
    scanf("%d %d %d",&X,&Y,&Z);

    sum=X+Y+Z;
    printf("the sum is=%d \n",sum);

    avrg=(float)sum/3;
    printf("average number=%0.2f \n",avrg);


    return 0;

}
