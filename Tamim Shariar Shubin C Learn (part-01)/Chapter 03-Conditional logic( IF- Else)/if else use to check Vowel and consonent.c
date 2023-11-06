#include<stdio.h>
int main()
{
    char ch;
    printf("Write an Alphabet:\n");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("%c alphabet is vowel\n",ch);
    }
    else
    {
        printf("%c alphabet is consonant\n",ch);
    }
    return 0;
}
