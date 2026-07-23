#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int value;
    struct stack *link;
};

struct stack *top = NULL;

void push(int x)
{
    struct stack *newNode;

    newNode = (struct stack *)malloc(sizeof(struct stack));

    if (newNode == NULL)
    {
        printf("Stack Overflow!\n");
        return;
    }

    newNode->value = x;

    newNode->link = top;
    top = newNode;

    return;
}

int pop()
{
    if (top == NULL)
    {
        printf("Stack is Underflow!\n");
        return -1;
    }

    struct stack *temp = top;
    int data = temp->value;

    top = top->link;

    free(temp);

    return data;
}

void display()
{
    struct stack *temp;
    
    if (top == NULL)
    {
        printf("Stack is Empty!\n");
        return;
    }

    temp = top;

    printf("Stack Elements : \n");
    while (temp != NULL)
    {
        printf("%d ", temp->value);
        temp = temp->link;
    }

    printf("\n");
    return;
}

int main()
{
    while (1)
    {

        int choise;
        printf("\n-----Operations on the Stack Linear List----\n");
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. DISPLAY");
        printf("\n4. EXIT\n");
        printf("\n");

        printf("Enter your Choise : ");
        scanf("%d", &choise);

        switch (choise)
        {
        case 1:
        {
            int val;
            printf("Enter the Value : ");
            scanf("%d", &val);

            push(val);

            break;
        }

        case 2:
        {
            int delete = pop();
            printf("Delete Element : %d\n", delete);

            break;
        }

        case 3:
        {
            display();
            break;
        }

        case 4:
            exit(0);
            break;

        default:
            printf("Invalid Choise!\nPlease Try Again...\n");
            break;
        }
    }

    return 0;
}