// these are those numbers whose reverse is equal to them .ex->121
#include<stdio.h>
int main()
{
    int n,rev=0,r,i,x;
    printf("enter the number to check for palindrome");
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(x==rev)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("number is not  palindrome");
    }
}