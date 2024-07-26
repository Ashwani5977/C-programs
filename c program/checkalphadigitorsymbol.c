//c program for checking if the given charqcter is alphabet or digit or special symbol
#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    if(ch>=65&&ch<=97||ch>97&&ch<=122)
    {
        printf("it is an alphabet");
    }
    else if(ch>=48&&ch<=57)
    {
        printf("it is a digit");
    }
    else
    {
        printf("it is an special symbol");
    }
}