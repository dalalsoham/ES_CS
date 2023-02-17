#include<stdio.h>

int main()
{
    int a[100],size,key,i,index;
    printf("Enter the number:\n");
    scanf("%d",&size);

    printf("Enter elements:\n");
    
    //for loop1 start
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
        printf("Enter the element to search:\n");
        scanf("%d",&key);
    

    //for loop2 start
    for(index=0;index<size;index++)
    {
        if(a[index]==key)
        {
            break;
        }
    }
        if(index<size)
        {
            printf("Key element found at index %d",index);
        }
        else
        {
            printf("Key element not found");
        }
        
    
    return 0;
}