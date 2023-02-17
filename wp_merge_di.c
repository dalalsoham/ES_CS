#include<stdio.h>
void merge(int a[],int low,int mid,int high)
{
     printf("gtetgetg");
    int c[high-low+1],i,j,k;
    i=low,j=mid+1,k=0;
    while(i<=mid && j<=high)
    {
        if(a[i]<=a[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=a[j++];
            // j++;
        }
        // k++;
    }
    while(i<=mid)
    {
        c[k++]=a[i++];
        // i++;
        // k++;
    }
    while(j<=high)
    {
        c[k++]=a[j++];
        // j++;
        // k++;
    }
    for(i=0,j=low;i<(high-low+1);i++,j++)
    a[j]=c[i];

}
void mergeSort(int a[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
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
    //  printf("\nentered array elements\n");
    //  display(arr,n);
    mergeSort(arr,0,n-1);
    printf("\narray after sorting\n");
    display(arr,n);
    return 0;

}