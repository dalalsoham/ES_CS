#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};
struct node *head;

void addatBegin()
{
    int value;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("List is full! \n");
    }
    else 
    {
        printf("Enter a number: ");
        scanf("%d", &value);
        ptr->info = value;
        ptr->next = head;
        head = ptr;
    }
}

void addatEnd()
{
    int value;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node *));
    printf("Enter a number: ");
    scanf("%d", &value);
    ptr->info = value;
    ptr->next = NULL;
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = ptr;
}

void addAny()
{
    int value, pos, i;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node *));
    printf("Enter a number: ");
    scanf("%d", &value);
    printf("Enter a position: ");
    scanf("%d", &pos);
    ptr->info = value;
    ptr->next = NULL;
    if (pos < 1)
    {
        printf("Invalid Position\n");
    }
    for (i = 1; i < pos - 1; i++)
    {
        head = head->next;
    }
    ptr->next = head->next;
    head->next = ptr;
}

void delBeg()
{
    struct node *ptr;
    if (ptr == NULL)
    {
        printf("List Empty\n");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(head);
    }
}

void delEnd()
{
    struct node *ptr, *ptr1;
    if (head == NULL)
    {
        printf("List Empty!");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr->next = NULL;
        free(ptr);
    }
}

void delAny()
{
    struct node *ptr, *ptr1;
    int pos, i;
    scanf("%d", &pos);
    for (i = 1; i < pos - 1; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;
        if (ptr == NULL)
        {
            printf("Position of list exceeded!");
        }
    }
    ptr1->next = ptr->next;
    free(ptr);
}

void search()
{
    int sea;
    int y = 0;
    printf("Enter a number to be searched: ");
    scanf("%d", &sea);
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        if (ptr->info == sea)
        {
            printf("Item found ! \n");
            ptr = ptr->next;
            y = y + 1;
            break;
        }
        else
        {
            ptr = ptr->next;
        }
    }
    if (y == 0)
    {
        printf("Item not found! \n");
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if (head == NULL)
    {
        printf("Nothing to Print! \n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d \n", ptr->info);
            ptr = ptr->next;
        }
    }
}

int main()
{
    int h;
    char ch;
    do
    {
        printf("For Insert: Press 1 \n");
        printf("For Delete: Press 2 \n");
        printf("For Print: Press 3 \n");
        printf("To search an element: Press 4 \n");
        printf("To Insert Node at the end: Press 5 \n");
        printf("To Insert Node at the any position: Press 6 \n");
        printf("To delete at beginning: Press 7 \n");
        printf("To delete at end: Press 8 \n");
        printf("To delete at any position: Press 9 \n");
        printf("Enter your choice: ");
        scanf("%d", &h);
        switch (h)
        {
        case 1:
            addatBegin();
            printf("Do you wish to continue? Y/N \n");
            scanf(" %c", &ch);
            break;

        case 2:
            delBeg();
            printf("Do you wish to continue? Y/N \n");
            scanf(" %c", &ch);
            break;
        case 3:
            display();
            printf("Do you wish to continue? Y/N \n");
            scanf(" %c", &ch);
            break;
        case 5:
            addatEnd();
            printf("Do you wish to continue? Y/N \n");
            scanf(" %c", &ch);
            break;
        case 6:
            addAny();
            printf("Do you wish to continue? Y/N \n");
            scanf(" %c", &ch);
            break;

        case 7:
            delBeg();
            printf("Do you wish to continue? Y/N \n");
            scanf(" %c", &ch);
            break;

        case 8:
            delEnd();
            printf("Do you wish to continue? Y/N \n");
            scanf(" %c", &ch);
            break;

        case 9:
            delAny();
            printf("Do you wish to continue? Y/N \n");
            scanf(" %c", &ch);
            break;
        }
    } while (ch == 'Y' || ch == 'y');
}