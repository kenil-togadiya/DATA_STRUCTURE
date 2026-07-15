#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

struct Node *first = NULL;

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

void swapTwoNode()
{
    struct Node *prev = NULL;
    struct Node *curr = first;
    struct Node *next;
    struct Node *tempNode;

    if (first == NULL || first->link == NULL)
    {
        return ;
    }
    

    while (curr != NULL && curr->link != NULL)
    {
        tempNode = (struct Node *)malloc(sizeof(struct Node));

        tempNode->link = NULL;

        tempNode->link = curr->link;
        curr->link = next->link;
        next->link = tempNode->link;
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
    int x, num;

    printf("Enter the number of Node : ");
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        printf("Enter the Element at a info portion in node : ");
        scanf("%d",&x);

        insertAtLast(x);
    }

    printf("\nOriginal List : \n");
    display();

    swapTwoNode();

    printf("\nSwaping Two Node :  \n");
    display();
    
}
