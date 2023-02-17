#include<stdio.h>

int main()
{
    int arr[100],key,i,index,size;
    printf("Enter the number:\n");
    scanf("%d",&size);
    printf("Enter the elements:\n");

    //for loop1
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the no to search:\n");
    scanf("%d",&key);

    //for loop2
    for(index=0;index<size;index++)
    {
        if(arr[index]==key)
        break;
    }
    if(index<size)
    printf("Key elements found at index %d",index);
    else
    printf("Key element not found");
    return 0;
}