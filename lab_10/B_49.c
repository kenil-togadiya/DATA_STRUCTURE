#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

struct Node *first;

void insertAtLast(int x)
{
    struct Node *newNode;
    struct Node *save;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->info = x;
    newNode->link = NULL;

    if (first == NULL)
    {
        first = newNode;
        return;
    }

    save = first;

    while (save->link != NULL)
    {
        save = save->link;
    }
    
    save->link = newNode;
}

int operationGCD(int n1,int n2)
{
    if (n2 == 0)
    {
        return n1;
    }
    else if(n2 > n1)
    {
        return operationGCD(n2,n1);
    }

    return operationGCD(n2,n1%n2);
    
}

void insertGCDNode()
{
    struct Node *save;
    struct Node *next;
    struct Node *GCDNewNode;

    save = first;
    next = save->link;

    while (next != NULL)
    {
        GCDNewNode = (struct Node *)malloc(sizeof(struct Node));

        GCDNewNode->info = operationGCD(save->info,next->info);

        GCDNewNode->link = NULL;

        GCDNewNode->link = save->link;
        save->link = GCDNewNode;

        save = save->link;
        save = save->link;
        next = next->link;
    }
}

void display()
{
    struct Node *save;
    
    save = first;

    while (save->link != NULL)
    {
        printf("%d -> ",save->info);
        save = save->link;
    }
    printf("%d",save->info);
}

int main()
{
    int x,num;
    
    printf("Enter the size of total list : ");
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        printf("Enter the new Element : ");
        scanf("%d",&x);

        insertAtLast(x);
    }

    insertGCDNode();

    display();

    return 0;
}
