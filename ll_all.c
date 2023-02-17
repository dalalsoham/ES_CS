#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;
struct node *creatNode(int item)
{
    struct node *current=(struct node*)malloc(sizeof(struct node));
    current->data=item;
    current->next=NULL;
    return(current);
};

void insertAtBeg(int item)
{
    struct node *new=creatNode(item);
    if(head==NULL)
    {
        head=new;
        return;
    }
    else
    {
        struct node *t=head;

        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=new;
        return;
    }
}