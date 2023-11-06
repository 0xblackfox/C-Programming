#include<stdio.h>
int main()
{
    float number;
    printf("Enter the number: ");
    scanf("%f",&number);
    //printf("Enter the first value:");
  //scanf("%d",&A);
 //printf("Enter the Second value:");
//scanf("%d",&B);
//sum=A+B;
//printf("%d",sum);
if(number>=80)
    printf("GPA A+");
else if(number>=70 && number<=79)
    printf("GPA A");
else if(number>=60 && number<=69)
    printf("GPA A-");
else
    printf("GPA F");
return 0;

}
