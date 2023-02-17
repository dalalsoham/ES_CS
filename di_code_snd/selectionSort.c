#include<stdio.h>
void swap(int arr[],int a,int b)
{
    int t=arr[a];
    arr[a]=arr[b];
    arr[b]=t;
}
void selection(int arr[],int n)
{
    int i,j,minIndex=0;
    for(i=0;i<=n-2;i++)
    {
        minIndex=i;
        for(j=i+1;j<=n-1;j++)
        {
            if(arr[minIndex]>arr[j])
            minIndex=j;
        }
        swap(arr,minIndex,i);
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
    selection(arr,n);
    printf("\narray after sorting\n");
    display(arr,n);
    return 0;

}