#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

struct Node *first;
struct Node *first2;
struct Node *last;

void insertLast(int x)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory Allocation is Failed!\n");
        return ;
    }
    
    newNode->info = x;
    newNode->link = NULL;

    if (first == NULL)
    {
        newNode->link = newNode;
        first = newNode;
        last = newNode;
        return;
    }

    last->link = newNode;
    newNode->link = first;
    last = newNode;

    return;
}


void splitList()
{
    struct Node *slow = first;
    struct Node *fast = first;
    
    
    if (first->link == NULL)
    {
        printf("At Least two Node Compulsary!Please became new Node!!!\n");
        return;
    }
    
    while (fast != last && fast->link != last)
    {
        slow = slow->link;
        
        fast = fast->link;
        fast = fast->link;
    }

    if (fast->link == last)
    {
        fast = fast->link;
    }
    
    first2 = slow->link;
    
    slow->link = first;
    
    fast->link = first2;
}

void display()
{
    struct Node *save1;
    struct Node *save2;

    if (first == NULL)
    {
        printf("Circular Linked List is Empty!\n ");
        return;
    }

    save1 = first;

    printf("\n");
    printf("---First Halves of Circularly Linked List---\n");
    do
    {
        printf("%d -> ",save1->info);
        save1 = save1->link;
    } while (save1 != first);
    
    printf("\n\n");

    

    save2 = first2;

    printf("---Second Halves of Circularly Linked List---\n");
    do
    {
        printf("%d -> ",save2->info);
        save2 = save2->link;
    } while (save2 != first2);
    
    printf("\n\n");
}

int main()
{
    int num,x;
    
    printf("Enter the Totsl number of node : ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        printf("Enter the value of Node : ");
        scanf("%d",&x);

        insertLast(x);
    }

    splitList();

    display();
    
}