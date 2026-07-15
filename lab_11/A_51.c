#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

struct Node *first;
struct Node *last;

void insertFirst()
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory Allocation Failed!\n");
        return;
    }

    printf("Enter the new number : ");
    scanf("%d", &newNode->info);

    newNode->link = NULL;

    if (first == NULL)
    {
        newNode->link = newNode;
        first = newNode;
        last = newNode;
        return;
    }
    else
    {
        newNode->link = first;
        first = newNode;
        last->link = newNode;
    }
    return;
}

void insertPosition()
{
    struct Node *newNode;
    struct Node *save;

    int pos, num;

    printf("Enter the Insert new Element at the position : ");
    scanf("%d", &pos);

    printf("Enter the Element : ");
    scanf("%d", &num);

    if (pos == 1)
    {
        insertFirst();
    }
    else
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        if (newNode == NULL)
        {
            printf("Memory Allocation is Failed!\n");
            return;
        }

        newNode->info = num;

        if (first == NULL)
        {
            newNode->link = newNode;
            first = newNode;
            last = newNode;
            return;
        }

        save = first;

        for (int i = 1; i < pos - 1; i++)
        {
            save = save->link;
        }

        if (save == last)
        {
            last->link = newNode;
            newNode->link = first;
            last = newNode;
        }
        else
        {
            newNode->link = save->link;
            save->link = newNode;
        }
    }
}

void insertEnd()
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory Allocation is Failed!\n");
        return;
    }

    printf("Enter the new Element : ");
    scanf("%d", &newNode->info);

    newNode->link = NULL;

    if (first == NULL)
    {
        newNode->link = newNode;
        first = newNode;
        last = newNode;
        return;
    }

    last->link = newNode;
    newNode->link = first;
    last = newNode;

    return;
}

void deleteFront()
{
    struct Node *temp;

    if (first == NULL)
    {
        printf("Circular Linked List is Empty!\n ");
        return;
    }

    if (first == last)
    {
        free(first);
        printf("Successfully Delete a First Node!\n");
        return;
    }

    temp = first;
    first = first->link;
    last->link = first;
    free(temp);

    return;
}

void deletePosition()
{
    struct Node *temp;
    struct Node *save;

    int pos;

    printf("Enter the Delete Element at the position : ");
    scanf("%d", &pos);

    if (first == NULL)
    {
        printf("Circular Linked List is Empty!\n ");
        return;
    }

    if (pos == 1)
    {
        deleteFront();
        return;
    }

    save = first;

    for (int i = 1; i < pos - 1; i++)
    {
        save = save->link;
    }

    temp = save->link;

    if (temp == last)
    {
        last = save;
        last->link = first;
        free(temp);
        return;
    }

    save->link = temp->link;
    free(temp);
}

void deleteEnd()
{
    struct Node *temp;

    if (first == NULL)
    {
        printf("Circular Linked List is Empty!\n ");
        return;
    }

    if (first == last)
    {
        free(first);
        printf("Successfully Deleted a First Node!\n");
        return;
    }

    temp = first;

    while (temp->link != last)
    {
        temp = temp->link;
    }

    temp->link = first;
    free(last);
    last = temp;

    return;
}

void display()
{
    struct Node *save;

    if (first == NULL)
    {
        printf("Circular Linked List is Empty!\n ");
        return;
    }

    save = first;

    do
    {
        printf("%d -> ", save->info);
        save = save->link;
    } while (save != first);

    printf("\n");
}

void mainmenu()
{
    int choise;
    printf("\n-----Operations on the Circular Linked Linear List----\n");
    printf("\n1. Insert a node at the front Position");
    printf("\n2. Insert a new node at the Specified Position");
    printf("\n3. Insert a new node at the end position");
    printf("\n4. Delete a node at the front position");
    printf("\n5. Delete a node from specified position");
    printf("\n6. Delete a node from end position");
    printf("\n7. Display all nodes\n");

    printf("\nEnter your Choise : ");
    scanf("%d", &choise);
    printf("\n");

    switch (choise)
    {
    case 1:
        insertFirst();
        break;

    case 2:
        insertPosition();
        break;

    case 3:
        insertEnd();
        break;

    case 4:
        deleteFront();
        break;

    case 5:
        deletePosition();
        break;

    case 6:
        deleteEnd();
        break;

    case 7:
        display();
        break;

    default:
        printf("Invalid Choise!\nPlease Try Again!\n");
        break;
    }
}
int main()
{
    while (1)
    {
        mainmenu();
    }

    return 0;
}