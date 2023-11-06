#include<stdio.h>
int main()
{
    int number;
    printf("enter the number");
    scanf("%d",&number);
    if(number=<100 && number>=80)
    {
        printf("%d the grade is A+",number);
    }
    else if(number<=79 && number>=70)
    {
        printf("%d the grade is A",number);
    }
      else if(number<=69 && number>=60)
    {
        printf("%d the grade is A-",number);
    }
      else if(number<=59 && number>=55)
    {
        printf("%d the grade is B+",number);
    }
      else if(number<=54 && number>=50)
    {
        printf("%d the grade is B",number);
    }  else if(number<=49 && number>=45)
    {
        printf("%d the grade is C",number);
      else if(number<=44 && number>=40)
    {
        printf("%d the grade is D",number);
    }
    else{
        printf("GPA Fail");
    }
}
