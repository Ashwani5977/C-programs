//here we are comparing the 3 numbers to find which is greatest.
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a =%d is greatest",a);
    }
    else
    if(b>a&&b>c)
    {
        printf("b =%d is greatest",b);
    }
    else
    {
        printf("c =%d is greatest",c);
    }
}