#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int arr[n];

    //for loop
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    //for loop2
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        // printf("Sorted order:\n");
        printf("\n%d",arr[i]);
    }
    return 0;
}