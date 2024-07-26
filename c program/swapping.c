//swapping means interchanging the positions.
#include<stdio.h>
//function for swapping without using third variable.
void swapWithoutThirdVar(int a,int b)
{
    printf("number before swapping =%d\t%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("number after swapping=%d\t%d\n",a,b);
}
//function for swapping with third variable.
void swapWithThirdVar(int a,int b)
{
    int c;
    printf("number before swapping=%d\t%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("number after swapping=%d\t%d\n",a,b);
}
void main()
{
    int a,b;
    printf("enter the numbers\n");
    scanf("%d%d",&a,&b);
    swapWithoutThirdVar(a,b);
    swapWithThirdVar(a,b);
}