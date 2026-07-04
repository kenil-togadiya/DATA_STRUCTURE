#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

struct Node *first;

void insertElement(int x)
{
    struct Node *newNode,*save;

    for (int i = 0 ; i < x; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter the insert Element : ");
        scanf("%d",&newNode->info);

        newNode->link = NULL;

        if(first == NULL)
        {
            first = newNode;
            save = newNode;
        }
        else
        {
            save->link = newNode;
            save = newNode;
        }
    }
}

void deleteNode(int x)
{
    struct Node *save, *pred;

    if (first == NULL)
    {
        printf("List is Empty!");
        return;
    }

    save = first;

    while (save->info != x && save->link != NULL)
    {
        pred = save;
        save = save->link;
    }

    if (save->info != x)
    {
        printf("\nNode not found!\n");
        return;
    }

    if (save == first)
    {
        first = first->link;
    }
    else
    {
        pred->link = save->link;
    }

    free(save);

    printf("\nDelete a node Successfully!\n");
}
void display()
{
    struct Node *save;

    if (first == NULL)
    {
        printf("List is Empty!");
    }

    save = first;

    printf("\nElements are : ");
    while (save != NULL)
    {
        printf("%d ",save->info);
        save = save->link;
    }
    
    printf("\n");
}


void main()
{

    int num;

    printf("Enter the total number of insert : ");
    scanf("%d", &num);

    insertElement(num);
    int numDelete;

    printf("Enter the delete a number : ");
    scanf("%d", &numDelete);

    deleteNode(numDelete);
    display();
}
