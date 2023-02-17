#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int queue[MAX],front=-1,rear=-1;
int enqueue(int item)
{
    if(rear==-1)
    {
        rear=0;
        queue[rear]=item;
        return 1;
    }
    else if((rear+1)%MAX == front)
    {
        printf("\noverflow\n");
        return 0;
    }
    else
    {
        rear=(rear+1)%MAX;
        queue[rear]==item;
        return 1;
    }
}
int dequeue()
{
    if(front==-1)
    {
        printf("\nunderflow");
        return 0;
    }
    else if(front == rear)
    {
        front=rear=-1;
        return 1;
    }
    else
    {
        front=(front+1)%MAX;
        return 1;
    }
}