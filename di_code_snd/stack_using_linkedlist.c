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
    return curr;
}
void insertBeg(int item)
{
    struct node *ptr=createNode(item);
    if(head==NULL)
    {
        head=ptr;
        return;
    }
    else
    {
        ptr->next=head;
        head=ptr;
        return;
    }
}
void deleteBeg()
{
    if(head==NULL)
    {
        printf("\nEMPTY");
        return;
    }
    else
    {
        struct node *temp=head;
        head=temp->next;
        free(temp);
        return;
    }
}
void push(int item)
{
    insertBeg(item);
}
void pop()
{
    deleteBeg();
}
void peek()
{
    printf("the stack top is : %d",head->data);
}
void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("\nlist is empty\n");
        return;
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%3d",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }

}
int main()
{
    int ch,key;
    while(1)
    {
        printf("\nenter 1 for push\nenter 2 for pop\nenter 3 for peek\nenter 4 for display\nenter 0 to exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nenter the item for push\n");
            scanf("%d",&key);
            push(key);
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            case 0:
            return 0;
            default:
            printf("\nwrong choice\n");

        }
    }
}