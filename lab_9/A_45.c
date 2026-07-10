#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

struct Node *first = NULL;
struct Node *copyFirst = NULL;

int insertNode(int x)
{
    struct Node *save,*newNode;

    for (int i = 0; i < x; i++)
    {
        newNode = malloc(sizeof(struct Node));

        if (newNode == NULL)
        {
            printf("Memory Allocation Failed!\n");
            return 1;
        }

        printf("Enter the new insert Element : ");
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

    return 0;
}

int copyNode(int x)
{
    struct Node *save,*newNode,*last;

    save = first;
    last = NULL;

    for (int i = 0 ; i < x; i++)
    {
        newNode = malloc(sizeof(struct Node));

        if (newNode == NULL)
        {
            printf("Memory Allocation Failed!");
            return 1;
        }

        newNode->info = save->info;
        newNode->link = NULL;

        if (copyFirst == NULL)
        {
            copyFirst = newNode;
            last = newNode;
        }
        else
        {
            last->link = newNode;
            last = newNode;
        }

        save = save->link;
    }
    return 0;
}

void copyNodeDisplay()
{
    printf("\nCopy Element : \n");
    struct Node *save;

    save = copyFirst;

    while (save != NULL)
    {
        printf("%d ",save->info);
        save = save->link;
    }
    return;
}

int main()
{
    int num;

    printf("Enter the total number of Node : ");
    scanf("%d",&num);

    insertNode(num);
    copyNode(num);

    copyNodeDisplay();

    return 0;
}