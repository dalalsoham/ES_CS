#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *last=NULL;
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
    if(last==NULL)
    {
        new->next=new;
        last=new;
        return;
    }
    else
    {
        new->next=last->next;
        last->next=new;
        return;
    }
}
void insertEnd(int item)
{
    struct node *new=createNode(item);
    if(last==NULL)
    {
        new->next=new;
        last=new;
        return;
    }
    else
    {
        new->next=last->next;
        last->next=new;
        last=new;
        return;
    }
}
void deleteBeg()
{
    if(last==NULL)
    {
        printf("\nthe list is empty\n");
        return;
    }

    else
    {
        struct node *p=last->next;
        last->next=p->next;
        free(p);
        return;
    }
}
void deleteEnd()
{
    if(last==NULL)
    {
        printf("\nthe list is empty\n");
        return;
    }
    else
    {
        struct node *p=last->next;
        while(p->next!=last)
        {
            p=p->next;
        }
        p->next=last->next;
        free(last);
        last=p;
    }
}
void display()
{
    if(last == NULL)
    {
        printf("\nthe list is empty\n");
    }
    else
    {
    struct node *t=last->next;
        do
        {
            printf("%3d",t->data);
            t=t->next;
        }
        while(t!=last->next);
    }
    
    printf("\n");
}
int main()
{
    int ch, key;
    while(1)
    {
        printf("\nenter 1 for insert at beg\nenter 2 for insert at end\neneter 3 to delete from beginging\nenter 4 to delete from the end\nenter 5 for display\neneter 0 to exit\n");
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