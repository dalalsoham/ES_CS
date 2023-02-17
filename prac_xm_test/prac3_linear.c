#include<stdio.h>

int main()
{
    int arr[100],size,i,index,key;
    printf("Enter the numbers:\n");
    scanf("%d",&size);
    printf("Enter the elements:\n");

    //for loop1
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the search element:\n");
    scanf("%d",&key);

    //for lopp2
    for(index=0;index<size;index++)
    {
        if(arr[index]==key)
        break;	
    }
    if(index<size)
    printf("Key elent found at index:%d",index);
    else
    printf("Element not found.");
    return 0;
}