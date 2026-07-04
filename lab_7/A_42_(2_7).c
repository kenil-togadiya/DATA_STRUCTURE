#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

struct Node *first = NULL;

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


void countNode()
{
    int count = 0;

    struct Node *save = first;

    while (save->link != NULL)
    {
        count++;
        save = save->link;
    }
    count++;
    printf("The number of nodes in the linked list is : %d\n", count);
}


int main()
{
    int num;

    printf("Enter the total number of insert : ");
    scanf("%d",&num);

    insertElement(num);
    display();
    countNode();

    return 0;
}