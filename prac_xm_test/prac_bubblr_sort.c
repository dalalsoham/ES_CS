#include<stdio.h>

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

    int counter=1;
    while(counter<n-1)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;

            }
        }
        counter++;
    }

    for(int i=0;i<n;i++)
    {
        printf("sorted list:%d\n",arr[i]);
    }
}