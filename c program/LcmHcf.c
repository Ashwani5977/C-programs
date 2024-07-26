//LCM means lowest common multiple.HCF means highest common multiple.
#include<stdio.h>
//function to find the HCF.
void hcf(int a,int b)
{
    int m=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0&&b%i==0)
        {
            m=i;
        }
    }
    printf("\nhfc of %d and %d =%d\n",a,b,m);
}
//function to find the LCM.
void lcm(int a,int b)
{
    for(int i=1;;i++)
    {
        if(i%a==0&&i%b==0)
        {
            printf("\nlcm of %d and %d =%d",a,b,i);
            break;
        }
    }
}
int main()
{
    int a,b;
    printf("enter numbers\n");
    scanf("%d%d",&a,&b);
    hcf(a,b);
    lcm(a,b);
}