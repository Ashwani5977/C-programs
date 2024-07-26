//Bubble sort is used to sort the elements that is arranging the elements in ascending or descending order.
#include<stdio.h>
int main()
{
    int i,j,n,temp,arr[10];
    printf("enter the number of elements in the array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
       { if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
       }
    }printf("sorted array is=");
    for(j=0;j<n;j++)
    {
        printf("%d\t",arr[j]);
    }
}