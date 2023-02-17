#include<stdio.h>

void merge(int a[],int low,int mid,int high)
{
    int c[high-low+1],i,j,k;
    i=low;
    j=mid+1;
    k=0;

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

    while(j<=mid)
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
        mergeSort(a,low,mid,high);
    }
}

void display(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mergeSort(arr,0,n-1);
    printf("After sorting:\n");
    display(arr,n);  
    return 0;

    
}