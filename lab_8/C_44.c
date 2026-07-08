#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int info;
    struct Node *link; 
};

struct Node *first = NULL;

int insertNode(int x)
{
    struct Node *newNode,*save;

    for (int i = 0 ; i < x ; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        if (newNode == NULL)
        {
            printf("Memory Allocation is failed!\n");
            return 1;
        }
        

        printf("Enter the insert Element : ");
        scanf("%d",&newNode->info);

        newNode->link = NULL;

        if (first == NULL)
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

void duplicateNode()
{
    struct Node *save,*pred;

    save = first;
    pred = NULL;

    while (save != NULL && save->link != NULL)
    {
        if (save->info == save->link->info)
        {
            pred = save->link;
            save->link = pred->link;
            free(pred);
        }
        else
        {
            save = save->link;
        }
    }   
}

void displayList()
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
    duplicateNode();
    displayList();

    return 0;
}