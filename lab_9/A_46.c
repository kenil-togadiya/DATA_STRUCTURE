#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int info;
    struct Node *link;
};

struct Node *first = NULL;

void insertNode(int x)
{
    struct Node *save;

    for (int i = 0; i < x; i++)
    {
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

        if (newNode == NULL)
        {
            printf("Memory Allocation Failed!\n");
            return;
        }

        printf("Enter the insert a new Element : ");
        scanf("%d",&newNode->info);

        newNode->link = NULL;

        if (first == NULL)
        {
            first = newNode;
            save = first;
        }
        else
        {
            save->link = newNode;
            save = newNode;
        }
    }
}

void reverseLink()
{
    struct Node *prev = NULL;
    struct Node *save = first;
    struct Node *next = NULL;


    while (save != NULL)
    {
        next = save->link;
        save->link = prev;
        prev = save;
        save = next;
    }
    first = prev;
}

void display()
{
    struct Node *save;
    save = first;

    while (save != NULL)
    {
        printf("%d ",save->info);
        save = save->link;
    }
}

int main()
{
    int num;

    printf("Enter the total number of insert : ");
    scanf("%d",&num);

    insertNode(num);
    reverseLink();
    display();

    return 0;
}
