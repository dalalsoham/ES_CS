#include<stdio.h>
int serach(int arr[],int n,int item)
{
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==item)
        {
            flag=1;
            return i;
        }
    }
    return 0;
}
int insert(int arr[],int n,int pos,int item)
{
    int i,j;
    for(i=n;i>pos-1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=item;
    return n+1;
}
int delete(int arr[],int n,int item)
{
    int i,s;
    s=serach(arr,n,item);
    if(s==0)
    {
        printf("\nelement not found\n");
        return n;
    }
    else
    {
        for(i=s;i>n;i--)
        arr[i]=arr[i+1];
    }
    return n-1;
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
    int n,ch;
    int m,p;
    printf("\nenter the number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nenter the array elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    while(1)
    {
        printf("\nenter 1 to insert an element\nenter 2 to update an element\nenter 3 to search an element\nenter 4 to remove an element\nenter 5 to display an element\nenter 0 to exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            printf("\nenter the element\n");
            scanf("%d",&m);
            printf("\nenter the position of insertion\n");
            scanf("%d",&p);
            n=insert(arr,n,p,m);
            break;
            case 2:
            
            printf("\nenter the element for update\n");
            scanf("%d",&m);
            printf("\nenter the position of update\n");
            scanf("%d",&p);
            arr[p-1]=m;
            break;
            case 3:
            
            printf("\nenter the element to be searched\n");
            scanf("%d",&m);
            p=serach(arr,n,m);
            if(!p)
            printf("\nsearched element is not found\n");
            else
            printf("\nElement found at the position %d",p+1);
            break;
            case 4:
            
            printf("\nenter the element to be deleted\n");
            scanf("%d",&m);
            n=delete(arr,n,m);
            break;
            case 5:
            printf("\nthe array elements are\n");
            display(arr,n);
            break;
            case 0:
            printf("\n************ EXIT **************\n");
            return 0;
            default:
            printf("\n!!!!!!!!!!!!!!!!! EXIT !!!!!!!!!!!!!!!\n");
        }
    }
}