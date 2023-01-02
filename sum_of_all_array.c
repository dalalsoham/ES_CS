#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0;
    printf("Enter the size of array:\n");
    scanf("%d",&n);

    printf("Enter elements in array:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum +=a[i];
    }

    printf("sum of array is:%d\n",sum);
    return 0;
}