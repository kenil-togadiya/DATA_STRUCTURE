#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int coff;
    int power;
    struct Node *link;
};

struct Node *first1;
struct Node *first2;

void insertAtLast(int coff,int pow,struct Node **head)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->coff = coff;
    newNode->power = pow;
    newNode->link = NULL;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    else
    {
        struct Node *save = *head;

        while (save->link != NULL)
        {
            save = save->link;
        }
        save->link = newNode;
    }
}

void display(struct Node *head)
{
    struct Node *save = head;

    while (save != NULL)
    {
        printf("%dx^%d",save->coff,save->power);
        save = save->link;

        if (save != NULL)
        {
            printf(" + ");    
        }
    }
}

void sumOfPolynomial()
{
    struct Node *save1 = first1;
    struct Node *save2 = first2;
    struct Node *result = NULL;

    if (save1 == NULL && save2 == NULL)
    {
        printf("Both polynomials are empty.\n");
        return;
    }

    if (save1 == NULL)
    {
        display(save2);
        return;
    }
    if (save2 == NULL)
    {
        display(save1);
        return;
    }

    while (save1 != NULL && save2 != NULL)
    {
        if (save1->power > save2->power)
        {
            insertAtLast(save1->coff, save1->power, &result);
            save1 = save1->link;
        }
        else if (save1->power < save2->power)
        {
            insertAtLast(save2->coff, save2->power, &result);
            save2 = save2->link;
        }
        else
        {
            int power = save1->power;
            int sum_coff = save1->coff + save2->coff;

            if (sum_coff != 0)
            {
                insertAtLast(sum_coff, save1->power, &result);
            }
            save1 = save1->link;
            save2 = save2->link;
        }
    }

    while (save1 != NULL)
    {
        insertAtLast(save1->coff, save1->power, &result);
        save1 = save1->link;
    }

    while (save2 != NULL)
    {
        insertAtLast(save2->coff, save2->power, &result);
        save2 = save2->link;
    }

    printf("Sum of polynomials: ");
    display(result);
}


int main()
{
    int n1,n2,coff,pow;

    printf("Enter the number of terms in first polynomial : ");
    scanf("%d",&n1);

    for (int i = 1; i <= n1; i++)
    {
        printf("Enter the Cofficient and Exponent : ");
        scanf("%d %d",&coff,&pow);
        insertAtLast(coff,pow,&first1);
    }

    printf("Enter the number of terms in second polynomial : ");
    scanf("%d",&n2);

    for (int i = 1; i <= n2; i++)
    {
        printf("Enter the Cofficient and Exponent : ");
        scanf("%d %d",&coff,&pow);
        insertAtLast(coff,pow,&first2);
    }

    printf("First Polynomial : ");
    display(first1);

    printf("\nSecond Polynomial : ");
    display(first2);
    printf("\n");

    sumOfPolynomial();
    
    return 0;
}