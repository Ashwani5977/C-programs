//program for finding table of any number.
#include<stdio.h>
//function for finding table of any number.
void table(int n)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d=%d\n",n,i,n*i);
    }
}
void main()
{
    int n;
    printf("enter the number to find the table\n");
    scanf("%d",&n);
    table(n);
}