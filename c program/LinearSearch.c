//it is used to search a element in a list.it can be sorted or unsorted elements.
#include<stdio.h>
int main()
{
    int n,arr[20],i,m=0,Element_to_search;
    printf("enter the no of elements you want\n");
    scanf("%d",&n);
    printf("enter the elements---\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element you want to search---\n");
    scanf("%d",&Element_to_search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==Element_to_search)
        {
            printf("Element found at pos=%d\n",(i+1));
            m=1;
        }
    }
    if(m==0)
    {
        printf("element not found in the array");
    }
    printf("-------------------------------------");
}