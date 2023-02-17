#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};
struct node *head;

void addatBeg()
{
    int value;
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node *));

    if(ptr==NULL)
    {
        printf("List is full\n");
    }

    else
    {
        printf("Enter the number:\n");
        scanf("%d",&value);
        ptr->info=value;
        ptr->next=head;
        head=ptr;
    }
}

void addatEnd()
{
    int value;
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node *));
    printf("Enter a number:\n");
    scanf("%d",&value);

    ptr->info=value;
    ptr->next=NULL;

    while(head->next !=NULL)
    {
        head=head->next;
    }
    head->next=ptr;

}

void delBeg()
{
    struct node *ptr;
    if(ptr==NULL)
    {
        printf("list is empty.");
    }
    else
    {
        ptr=head;
        head=ptr->next;
        free(head);
    }
}

void delEnd()
{
    struct node *ptr;
    struct node *ptr1;

    if(ptr==NULL)
    {
        printf("list is empty");

    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
    }
    else
    {
        ptr=head;
        while(ptr->next !=NULL)
        {
            ptr1=ptr;
            ptr=ptr->next;
        }
        ptr->next=NULL;
        free(ptr);
    }
}

void addAny()
{
    int value,pos,i;
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node *));
    printf("Enter a number:\n");
    scanf("%d",&value);
    printf("Enter a position:\n");
    scanf("%d",&pos);
    ptr->info=value;
    ptr->next=NULL;

    if(pos<1)
    {
        printf("Invalid position.");
    }
    for(int i=1;i<pos-1;i++)
    {
        head=head->next;
    }
    ptr->next=head->next;
    head->next=ptr;

}

void delAny()
{
    int pos,i;
    struct node *ptr;
    struct node *ptr1;
    printf("Enter the position:\n");
    scanf("%d",&pos);

    for(i=1;i<pos-1;i++)
    {
        ptr1=ptr;
        ptr=ptr->next;

        if(ptr==NULL)
        {
            printf("position of list exceeded");
        }
    }
    ptr1->next=ptr->next;
    free(ptr);
}