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
    struct Node *save,*newNode;

    for (int i = 0; i < x; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        if (newNode == NULL)
        {
            printf("Memory Allocation Failed!\n");
            return ;
        }

        printf("Enter the new Element : ");
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

void sortElement(int x)
{
    struct Node *save,*prev;
    int temp;

    for (int i = 0; i < x - 1; i++)
    {
        prev = first;
        save = first->link;

        while (save != NULL)
        {
            if(save->info < prev->info)
            {
                temp = prev->info;
                prev->info = save->info;
                save->info = temp; 
            }
            prev = save;
            save = save->link;
        }
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
    int num;

    printf("Enter the size of total list : ");
    scanf("%d",&num);

    insertNode(num);
    sortElement(num);
    display();

    return 0;
}