#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    struct Node *LPTR;
    int info;
    struct Node *RPTR;
};

struct Node *first = NULL;
struct Node *last = NULL;

void insertLast(int x)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory Allocation is Failed!\n");
        return;
    }

    newNode->info = x;
    newNode->LPTR = NULL;
    newNode->RPTR = NULL;

    if (first == NULL)
    {
        first = last = newNode;
        return;
    }

    last->RPTR = newNode;
    newNode->LPTR = last;
    last = newNode;

}

void deleteAlternate()
{
    struct Node *save,*temp;

    save = first;
    int i = 1;

    while (save != NULL)
    {
        if (i % 2 == 0)
        {
            temp = save;
            save = save->RPTR;

            temp->LPTR->RPTR = temp->RPTR;

            if (temp->RPTR != NULL)
            {
                temp->RPTR->LPTR = temp->LPTR;
            }
            
            free(temp);
        }
        else
        {
            save = save->RPTR;
        }
        i++;
    }
}

void display()
{
    struct Node *save;

    save = first;

    while (save != NULL)
    {
        printf("%d <-> ",save->info);
        save = save->RPTR;
    }
}

int main()
{
    int num,x;

    printf("Enter the total number of node : ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        printf("Enter the value of new node : ");
        scanf("%d",&x);

        insertLast(x);
    }
    deleteAlternate();
    display();
    
}