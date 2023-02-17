#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack[MAX],top=-1;
int push(int);
int pop();
void peek();
int isFULL();
int isEmpty();
int isFULL()
{
    if(top == MAX-1)
    return 0;
    else
    return 1;
}
int isEmpty()
{
    if(top == -1)
    return 0;
    else
    return 1;
}
int push(int item)
{
    if(top == MAX-1)
    return 0;
    else
    {
        stack[++top]=item;
        return 1;
    }
}
int pop()
{
    if(top == -1)
    return 0;
    else
    {
        int e=stack[top];
        top--;
        return e;
    }
}
void peek()
{
    int e=isEmpty();
    if(e==0)
    printf("\nstack underflow\n");
    else
    printf("\nthe stack top is %d ",stack[top]);
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
    int ch,n,res;
    while(1)
    {
        printf("\nenter 1 for push\nenter 2 for pop\nenter 3 for peek\nenter 4 to check the stack is empty\nenter 5 to check the stack is full\nenter 6 for display\nenter 0 to exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nenter the item\n");
            scanf("%d",&n);
            res=push(n);
            if(res==0)
            printf("\nStack overflow\n");
            break;
            case 2:
            res=pop();
            if(res==0)
            printf("\nstack underflow\n");
            else
            printf("\nelement deleted\n");
            break;
            case 3:
            peek();
            break;
            case 4:
            res=isEmpty();
            if(res == 0)
            printf("\nstack is empty\n");
            break;
            case 5:
            res=isFULL();
            if(res == 0)
            printf("\nstack is full\n");
            break;
            case 6:
            display(stack,top+1);
            break;
            case 0:
            printf("**************** EXIT ******************");
            return 0;
            break;
            default:
            printf("********** WRONG CHOICE ************");
            return 0;

        }
    }
}

