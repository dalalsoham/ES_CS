#include<stdio.h>

int Binarysearch(int arr[],int start,int end,int f)
{
    int mid;

    if(start>end)
    return -1;

    mid=(start+end)/2;

    if(arr[mid]==f)
    return mid;
    else if(f>arr[mid])
    return Binarysearch(arr,mid+1,end,f);
    else
    return Binarysearch(arr,mid-1,start,f);
}


int main()
{
    int i,first,last,n,key,arr[100],index;
    printf("Enter the number:\n");
    scanf("%d",&n);

    printf("Enter %d integers\n",n);

    //for loop
    for(i=0;i<n;i++)
    scanf("%d",arr[i]);
    
    printf("Enter the element to search:\n");
    scanf("%d",&key);

    first=0;
    last=n-1;

    index=Binarysearch(arr,first,last,key);

    if(index==-1)
    {
        printf("Not found.",key);
    }
    else
    {
        printf("%d is present at location: %d",key,index+1);
    }
    return 0;
}