//prime numbers are those which have only 2 multiples ,1 and itself.smallest prime number is 2.
#include<stdio.h>
int main()
{
    int n,i,m=0;
    printf("enter value to check for prime");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            m++;
        }
    }
    if(m==2)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
}