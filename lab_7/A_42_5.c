#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int info;
    struct Node *link;
};

struct Node *first;

void deleteLast()
{
    struct Node *save,*pred;

    if (first == NULL)
    {
        printf("List is Empty!");
        return;
    }
    
    save = first;

    while (save->link != NULL)
    {
        pred = save;
        save = save->link;
    }

    pred->link = NULL;

    free(save);

    printf("\nDelete a Last Node successfully!\n ");
}

void main()
{
    deleteLast();
}