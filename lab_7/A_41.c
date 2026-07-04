#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

int main()
{
    struct Node *first;

    first = (struct Node *)malloc(sizeof(struct Node));

    if (first == NULL)
    {
        printf("Memory aloocation is failed!");
    }
    
    printf("Enter the data : ");
    scanf("%d",&first->info);

    first->link = first;

    printf("%d",*first);

    free(first);
    
    return 0;
}
