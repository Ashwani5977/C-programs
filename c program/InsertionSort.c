#include<stdio.h>
int main()
{
    int i,j,key,n,arr[10];
    printf("enter n");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    printf("sorted array is = ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}