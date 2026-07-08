#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int info;
    struct Node *link;
};

struct Node *first1 = NULL;
struct Node *first2 = NULL;

void insertList1(int x)
{
    struct Node *newNode,*save;

    for (int i = 0; i < x; i++)
    {
        newNode = malloc(sizeof(struct Node));

        if (newNode )
        {
            /* code */
        }
        

        printf("Enter the insert a new Element : ");
        scanf("%d",&newNode->info);

        newNode->link = NULL;

        if (first1 == NULL)
        {
            first1 = newNode;
            save = newNode;
        }
        else
        {
            save->link = newNode;
            save = newNode; 
        }
    }
}

void insertList2(int x)
{
    struct Node *newNode,*save;

    for (int i = 0; i < x; i++)
    {
        newNode = malloc(sizeof(struct Node));

        printf("Enter the insert a new Element : ");
        scanf("%d",&newNode->info);

        newNode->link = NULL;

        if (first2 == NULL)
        {
            first2 = newNode;
            save = newNode;
        }
        else
        {
            save->link = newNode;
            save = newNode;
        }   
    }
}

void sameTwoList()
{
    struct Node *save1,*save2;

    save1 = first1;
    save2 = first2;

    while (save1 != NULL && save2 != NULL)
    {
        if (save1->info == save2->info)
        {
            save1 = save1->link;
            save2 = save2->link;
        }
        else
        {
            printf("Singly linked linear list are not same!\n");
            return;
        }
    }

    if (save1 == NULL && save2 == NULL)
    {
        printf("Singly linked linear list are same! \n");
    }
    else
    {
        printf("Singly linked linear list are not same! \n");
    }
}

void main()
{
    int num1;

    printf("Enter the size of first linked list : ");
    scanf("%d",&num1);

    insertList1(num1);

    int num2;
    
    printf("Enter the size of second linked list : ");
    scanf("%d",&num2);

    insertList2(num2);

    sameTwoList();

}

