#include<stdio.h>
void insertionSort(int arr[],int n)
{
    int i,j,key,c=1;
    for(i=1;i<n;i++)
    {
        j=i-1;
        key=arr[i];
        while(j>=0 && key<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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
    insertionSort(arr,n);
    printf("\narray after sorting\n");
    display(arr,n);
    return 0;

}