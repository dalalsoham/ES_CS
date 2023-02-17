#include<stdio.h>

void merge(int a[],int low, int mid, int high)
{
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
        }
    }

    while(i<=mid)
    {
        c[k++]=a[i++];
    }
    while(j<=high)
    {
        c[k++]=a[j++];
    }

    for(i=0,j=low;i<(high-low+1);i++,j++)
    {
        a[j]=c[i];
    }
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

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    
    int arr[n];
    printf("\nEnter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enterd array elements are: \n");
    print(arr,n);
    mergeSort(arr,0,n-1);
    printf("sorted array elements are:\n");
    print(arr,n);
    return 0;
}