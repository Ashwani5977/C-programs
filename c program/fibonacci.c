// fibonacci series is the series in which first two numbers are 0,1 and 
//next number is sum of previous two numbers,i.e.0+1=>1then 1+1=>2then2+1=>3and so on.
#include<stdio.h>
int main()
{
    int a,b=1,c=0,n,i;
    printf("enter the limit upto which you want to print the series");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",c);
        a=b;
        b=c;
        c=a+b;
    }
}