#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int queue[MAX], front=-1,rear=-1;
int enqueue(int);
int dequeue();
void display();
int enqueue(int item)
{
    if(rear==-1)
    {
        front=rear=0;
        queue[rear]=item;
        return 1;
    }
    else if(rear == MAX-1)
    {
        printf("\nqueue overflow\n");
        return 0;
    }
    else
    {
        queue[++rear]=item;
        return 1;
    }

}
int dequeue()
{
    if(front == -1)
    {
        printf("\nqueue underflow");
        return 0;
    }
    else if(front ==rear )
    {
        front= rear= -1;
        return 1;
    }
    else
    {
        front=front+1;
        return 1;

    }
}
int isFULL()
{
    if(rear==MAX-1)
    {
        printf("\nqueue is full\n");
        return 0;
    }
    else
    return 1;
}
int isEmpty()
{
    if(front == -1)
    {
        printf("\nqueue is empty");
        return 0;
    }
    else
    return 1;
}
void display()
{
    int i;
    for(i=front;i<=rear;i++)
    printf("%d ",queue[i]);
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
            res=enqueue(n);
            if(res==0)
            printf("\nStack overflow\n");
            break;
            case 2:
            res=dequeue();
            if(res==0)
            printf("\nstack underflow\n");
            else
            printf("\nelement deleted\n");
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
            display();
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

