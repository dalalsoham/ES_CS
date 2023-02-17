#include<stdio.h>
void swap(int arr[],int a,int b)
{
    int t=arr[a];
    arr[a]=arr[b];
    arr[b]=t;
}
int partition(int arr[],int high,int low)
{
    int i=low-1;
    int pivot=arr[high-1];
    for(int j=low;i<high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    i++;
    swap(arr,i,high);
    return i;
}
void quickSort(int arr[],int low, int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
void display(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

}
int main()
{
    int n;
    printf("\nenter the number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nenter the array elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("\nentered array elements\n");
    display(arr,n);
    quickSort(arr,0,n-1);
    printf("\narray after sorting\n");
    display(arr,n);
    return 0;

}