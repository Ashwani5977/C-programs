//factorial means the product of natural numbers from 1 to that number.example,factorial of 3=3x2x1=>6.
#include<stdio.h>
int factorial(int fact)
{
    if(fact>=1)
    {
        return fact*factorial(fact-1);
    }
    else
    return 1;
}
int main()
{
    int n,a;
    printf("enter the number to find the factorial");
    scanf("%d",&n);
    a=factorial(n);
    printf("factorial of %d=%d",n,a);
}