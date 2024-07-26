// selection sort in c
#include<stdio.h>
int main()
{
     int arr[10],i,n,min,temp,j,minIndex;
     printf("enter the number of elements you want in the array");
     scanf("%d",&n);
     printf("enter the elements of the array");
     for(i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
     //selection sorting process
     for(i=0;i<n-1;i++)
     {
      minIndex =i;
       for(j=i+1;j<n;j++)
     
        if(arr[j]<arr[minIndex])
        {
            minIndex=j;
        }
        temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
     }
     printf("sorted array is =");
     for(i=0;i<n;i++)
     {
        printf("%d\n",arr[i]);
     }
}