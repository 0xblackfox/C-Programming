#include<stdio.h>
int main()
{
  char ch;
  printf("Write a Alphabet to check its capital letter or small letter:\n");
  scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("%c is lower case\n",ch);
    }
    else if(ch>='A' && ch<='Z')
        {
        printf("%c is Upper case",ch);
    }

    return 0;
}
