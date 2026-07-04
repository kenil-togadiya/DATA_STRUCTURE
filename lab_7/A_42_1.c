#include<stdio.h>
#include<stdlib.h>

struct Node 
{
  int INFO;
  struct Node *link;  
};

struct Node *first = NULL;

int insert_first(int x)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory Allocation is Failed!");
        return 1;
    }
    
    newNode->INFO = x;

    newNode->link = first;

    first = newNode;

    printf("Node Inserted successfully! \n");
    printf("%d",*first);

    free(newNode);
    
}

int main()
{
    int num;

    printf("Enter the insert a node at the first position : ");
    scanf("%d",&num);

    insert_first(num);
    return 0;

}