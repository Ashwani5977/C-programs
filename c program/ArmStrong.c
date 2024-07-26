// these are those numbers whose digits cubes sum is equal to the number.ex->153
#include<stdio.h>
int main()
{
    int n,pal=0,r,i,x;
    printf("enter the number to check for armstrong");
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        r=n%10;
        pal=pal+r*r*r;
        n=n/10;  
    }
    if(x==pal)
    {
        printf("number is armstrong");
    } 
    else
    {
        printf("number is not armstrong");
    }
}