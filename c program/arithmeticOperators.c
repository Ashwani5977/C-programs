// c program for doing operations using the arithmetic operators
#include<stdio.h>
void main()
{
    int a,b,c,ch;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("1.add\n2.sub\n3.mul\n4.div\n5.mod\n");
    printf("enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:c=a+b;
        printf("%d",c);
        break;
        case 2:c=a-b;
        printf("%d",c);
        break;
        case 3:c=a*b;
        printf("%d",c);
        break;
        case 4:c=a/b;
        printf("%d",c);
        break;
        case 5:c=a%b;
        printf("%d",c);
        break;
        default:printf("invalid operation");
    }
}