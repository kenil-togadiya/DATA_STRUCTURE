#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *LPTR;
    int info;
    struct Node *RPTR;
};

struct Node *first = NULL;

void insertFront()
{
    struct Node *newNode, *save;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the value of New Node :  ");
    scanf("%d", &newNode->info);

    newNode->LPTR = NULL;
    newNode->RPTR = NULL;

    if (first == NULL)
    {
        first = newNode;
        save = newNode;
        return;
    }

    newNode->RPTR = first;
    first->LPTR = newNode;
    first = newNode;
}

void insertEnd()
{
    struct Node *newNode, *save;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory Allocation Failed\n");
        return;
    }

    printf("Enter the value of New Node :  ");
    scanf("%d", &newNode->info);

    newNode->LPTR = NULL;
    newNode->RPTR = NULL;

    if (first == NULL)
    {
        first = newNode;
        save = newNode;
        return;
    }

    save = first;

    while (save->RPTR != NULL)
    {
        save = save->RPTR;
    }

    save->RPTR = newNode;
    newNode->LPTR = save;
}

void deleteSpecified()
{
    struct Node *save;
    struct Node *temp;
    int x;

    save = first;

    if (first == NULL)
    {
        printf("List is Empty.\n");
        return;
    }

    printf("Enter the Specified Position which delete a node : ");
    scanf("%d", &x);

    if (x <= 0)
    {
        printf("Node not Found!\nPlease Try Again...\n");
        return;
    }

    if (x == 1)
    {
        if (first->RPTR == NULL)
        {
            free(first);
            return;
        }
        else
        {
            first = first->RPTR;
            first->LPTR = NULL;
            free(save);
            return;
        }
    }

    for (int i = 1; i < x && save != NULL; i++)
    {
        save = save->RPTR;
    }

    if (save == NULL)
    {
        printf("Invalid Position.\n");
        return;
    }

    if (save->RPTR == NULL)
    {
        save->LPTR->RPTR = NULL;
        free(save);
    }
    else
    {
        save->LPTR->RPTR = save->RPTR;
        save->RPTR->LPTR = save->LPTR;
        free(save);
    }
}

void display()
{
    struct Node *save;

    if (first == NULL)
    {
        printf("List is Empty!\n");
        return;
    }

    save = first;

    while (save != NULL)
    {
        printf("%d -> ", save->info);
        save = save->RPTR;
    }
}

void mainmenu()
{
    int choise;
    printf("\n-----Operations on the Doubly Linked Linear List----\n");
    printf("\n1. Insert a node at the front Position");
    printf("\n2. Insert a new node at the end position");
    printf("\n3. Delete a node from specified position");
    printf("\n4. Display all nodes");
    printf("\n5. Exit\n");

    printf("\nEnter your Choise : ");
    scanf("%d", &choise);
    printf("\n");

    switch (choise)
    {
    case 1:
        insertFront();
        break;

    case 2:
        insertEnd();
        break;

    case 3:
        deleteSpecified();
        break;

    case 4:
        display();
        break;

    case 5:
        exit(0);
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