#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

struct Node *first;

void deleteFirst()
{
    struct Node *save;

    if (first == NULL)
    {
        printf("List is empty!");
        return;
    }

    save = first;

    if (save == first)
    {
        first = first->link;
        free(save);
        printf("Delete a first node successfully!");
    }
}
int main()
{
    deleteFirst();

    return 0;
}
