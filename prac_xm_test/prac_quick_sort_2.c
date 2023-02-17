#include<stdio.h>

int partition(int arr[], int low,int high)
{
    int id=low-1;
    int t,i;
    for(i=low;i<high;i++)
    {
        if(arr[i]<arr[high])
        {
            id++;
            t=arr[id];
            arr[id]=arr[i];
            arr[i]=t;
        }
    }
    id++;
    t=arr[id];
    arr[id]=arr[high];
    arr[high]=t;
    return id;
}

void quickSort(int arr[],int low,int high)
{
    int p;
    if(low<high)
    {
        p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}

void print(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        printf("%3d",arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    int arr[100];
    printf("Enter the length of array:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Original array: ");
    print(arr,n);
    quickSort(arr,0,n-1);
    printf("Sorted array: ");
    print(arr,n);
}