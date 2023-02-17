#include<stdio.h>

int main()
{
    int arr[100],i,size,key,first,last,mid;
    printf("Enter the number:\n");
    scanf("%d",&size);
    printf("Enter the integers:\n",size);
    //for loop
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to search:\n");
    scanf("%d",&key);
    first=0;
    last=size-1;
    mid=(first+last)/2;

    //while start
    while(first<=last)
    {
        if(arr[mid]<key)
        {
            first=mid+1;
        }
        else if(arr[mid]==key)
        {
            printf("%d is present at index %d\n",key,mid+1);
            break;
        }
        else
        {
            last=mid-1;
            mid=(first+last)/2;
        }
    }
    if(first>last)
    {
        printf("Not found.\n",size);
    }
    return 0;
}