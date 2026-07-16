#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

struct Node *first;

void insertNode(int x)
{
    struct Node *save, *newNode;

    for (int i = 0; i < x; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        if (newNode == NULL)
        {
            printf("Memory Allocation Failed!\n");
            return;
        }

        printf("Enter the new Element : ");
        scanf("%d", &newNode->info);

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

void swapPosition(int start, int end)
{

    struct Node *prevSave = NULL;
    struct Node *save = first;
    struct Node *prevLast = NULL;
    struct Node *last = first;
    struct Node *tempPointer;

    tempPointer = first;

    int countStrat = 1;
    int countEnd = 1;

    while (tempPointer->link != NULL)
    {
        if (countStrat != start)
        {
            if (prevSave == NULL)
            {
                prevSave = first;
            }
            else
            {
                prevSave = prevSave->link;
            }
            countStrat++;
            save = save->link;
        }
        else
        {
            if (prevLast == NULL)
            {
                prevLast = first;
            }
            else
            {
                prevLast = prevLast->link;
            }
            last = last->link;
        }
        tempPointer = tempPointer->link;
    }

    if (prevSave != NULL)
    {
        prevSave->link = last;
    }
    else
    {
        first = last;
    }
    if (prevLast != NULL)
    {
        prevLast->link = save;
    }
    else
    {
        first = save;
    }

    struct Node *temp = save->link;
    save->link = last->link;
    last->link = temp;
}

void display()
{
    struct Node *save;
    save = first;

    while (save->link != NULL)
    {
        printf("%d -> ", save->info);
        save = save->link;
    }
    printf("%d", save->info);
}

int main()
{
    int num;

    printf("Enter the size of total list : ");
    scanf("%d", &num);

    insertNode(num);

    int start, end;
    printf("Enter the number of K node from Beginning : ");
    scanf("%d", &start);

    printf("Enter the number of k node from End : ");
    scanf("%d", &end);

    swapPosition(start, end);

    display();

    return 0;
}