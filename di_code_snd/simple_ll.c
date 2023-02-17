#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *createNode(int item)
{
    struct node *curr=(struct node*)malloc(sizeof(struct node));
    curr->data=item;
    curr->next=NULL;
    return(curr);
};
void insertBeg(int item)
{
    struct node *new=createNode(item);
    if(head==NULL)
    {
        head=new;
        return;
    }
    else
    {
        new->next=head;
        head=new;
        return;
    }
}
void insertEnd(int item)
{
    struct node *new=createNode(item);
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
void deleteBeg()
{
    if(head==NULL)
    {
        printf("\nthe list is empty\n");
        return;
    }
    else
    {
        struct node *p=head;
        head=head->next;
        free(p);
        return;
    }
}
void deleteEnd()
{
    if(head==NULL)
    {
        printf("\nthe list is empty\n");
        return;
    }
    else
    {
        struct node *p=head;
        while(p->next->next!=NULL)
        {
            p=p->next;
        }
        free(p->next->next);
        p->next=NULL;
    }
}
void reverse()
{
    struct node *p, *q, *r;
    p=head;
    r=NULL;
    while(p!=NULL)
    {
        q=p;
        p=p->next;
        q->next=r;
        r=q;
    }
    head=r;
}
void display()
{
    if(head == NULL)
    {
        printf("\nthe list is empty\n");
    }
    struct node *t=head;
    while(t!=NULL)
    {
        printf("%3d",t->data);
        t=t->next;
    }
    printf("\n");
}
int main()
{
    int ch, key;
    while(1)
    {
        printf("\nenter 1 for insert at beg\nenter 2 for insert at end\neneter 3 to delete from beginging\nenter 4 to delete from the end\nenter 5 for reversing the list\nenter 6 for display\neneter 0 for display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nenter the item to be inserted\n");
            scanf("%d",&key);
            insertBeg(key);
            break;
            case 2:
            printf("\nenter the item to be inserted\n");
            scanf("%d",&key);
            insertEnd(key);
            break;
            case 3:
            deleteBeg();
            break;
            case 4:
            deleteEnd();
            break;
            case 5:
            reverse();
            break;
            case 6:
            printf("\nthe inputed linked list is\n");
            display();
            break;
            case 0:
            printf("!!!!!!!!!!!!!!!!!! EXIT !!!!!!!!!!!!!!!!!");
            return 0;
            default:
            printf("\n********************** INVALID CHOICE ************************");
            return 0;
        }


    }
}