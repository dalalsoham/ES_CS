#include<stdio.h>
void swap(int arr[],int a,int b)
{
    int t=arr[a];
    arr[a]=arr[b];
    arr[b]=t;
}
void bubbleSort(int arr[],int n)
{
    int i,j,c=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr,j,j+1);
        }
        printf("pass %d :",c++);
        for(int k=0;k<n;k++)
        printf("%d ",arr[k]);
        printf("\n");

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
    bubbleSort(arr,n);
    printf("\narray after sorting\n");
    display(arr,n);
    return 0;

}