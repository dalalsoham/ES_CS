#include<stdio.h>

int main()
{
    int i,first,last,mid,size,key,arr[100];

    printf("Enter the numbers:\n");
    scanf("%d",&size);
    printf("Enter %d integers:\n",size);

    //for loop start
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    //for loop end
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
            printf("%d is found at index %d\n",key,mid+1);
            break;
        }
        else
        {
            last=mid-1;
            mid=(first+last)/2;
        }
    }
    //while end 

    if(first>last)
    printf("not found.\n",key);
    return 0;
}