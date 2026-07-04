#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

struct Node *first;

void insertList(int totalNum)
{
    struct Node *save,*newNode;

    for (int i = 0; i < totalNum; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter the data : ");
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

void insert_last(int x)
{
    struct Node *save,*newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));
    
    if (newNode == NULL)
    {
        printf("Memory Allocaation Failed!");
        return;
    }

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

void display()
{
    struct Node *save;

    if (first == NULL)
    {
        printf("list is Empty!");
    }
    
    save = first;

    while (save != NULL)
    {
        printf("%d ",save->info);
        save = save->link;
    }
    
}

int main()
{
    int total_num;
    int num;
    printf("Enter the total number of list : ");
    scanf("%d",&total_num);

    printf("Enter the new node at the last position : ");
    scanf("%d",&num);

    insertList(total_num);
    insert_last(num);
    display();

    return 0;
}