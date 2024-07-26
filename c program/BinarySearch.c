//Binary search is used to search a element in a sorted list of elements.more efficient than the linear search.
#include<stdio.h>
int main()
{
     int n,arr[20],i,Element_to_search,low,mid,high;
    printf("enter the no of elements you want\n");
    scanf("%d",&n);
    printf("enter the elements---\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    low=0;
    high=(n-1);
    printf("enter the element you want to search---\n");
    scanf("%d",&Element_to_search);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==Element_to_search)
        {
            printf("Element found at position=%d\n",(mid+1));
            break;
        }
        else if(arr[mid]>Element_to_search)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(low>high)
    {
        printf("Element not found\n");
    }
    printf("---------------------------");
}