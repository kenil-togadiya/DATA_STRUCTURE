#include<stdio.h>
#include<stdlib.h>
#define size 100

int s[size];
int top = -1;

void push(int x)
{
    if (top >= size - 1)
    {
        printf("Stack is Overflow!\n");
        return;
    }

    top++;
    s[top] = x;

    return;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack is Underflow!\n");
        return -1;
    }

    top--;

    return s[top + 1];
}

int peep(int i)
{
    if (top - i + 1 <= -1)
    {
        printf("Invalid position!\n");
        return -1;
    }

    return s[top - i + 1];
}

int peek()
{
    if (top == -1)
    {
        printf("Stack is Underflow!\n");
        return -1;

    }
    
    return s[top];
}

void change(int i,int newValue)
{
    if (top - i + 1 <= -1 || i > top)
    {
        printf(" Invalid Position!\n");
        return;
    }

    s[top - i + 1] = newValue; 
    printf("Successfully change the value!\n");
    
    return;
}

void display()
{
    if (top == -1)
    {
        printf("Stack is Underflow!\n");
        return;
    }
    
    for (int i = top ; i >= 0; i--)
    {
        printf("%d ",s[i]);
    }
    return;
}


void mainMenu()
{
    int choise;
    printf("\n-----Operations on the Stack Linear List----\n");
    printf("\n1. PUSH");
    printf("\n2. POP");
    printf("\n3. PEEP");
    printf("\n4. PEEK");
    printf("\n5. CHANGE");
    printf("\n6. DISPLAY");
    printf("\n7. Exit\n");

    printf("\nEnter your Choise : ");
    scanf("%d", &choise);
    printf("\n");

    switch (choise)
    {
    case 1:
    {   
        int val;
        printf("Enter the Value : ");
        scanf("%d",&val);
        
        push(val);
        
        break;
    }

    case 2:
    {
        int delete = 0;
        delete = pop();
        printf("Delete Element : %d\n",delete);        
        
        break;
    }
        
    case 3:
    {
        int index,value = 0;
        printf("Enter the Index which you show the value of stack : ");
        scanf("%d",&index);
        printf("\n");
        
        value = peep(index);
        printf("Value : %d\n",value);
        
        break;
    }

    case 4:
    {
        int first = 0;
        first = peek();
        
        printf("Display the Top Element : %d\n",first);

        break;
    }

    case 5:
    {
        int indx,new;
        printf("Enter the index of change the value : ");
        scanf("%d",&indx);
        
        printf("Enter the new Value which you can change the value : ");
        scanf("%d",&new);
        
        change(indx,new);
        break;
    }

    case 6:
    {
        display();
        break;
    }
        
        case 7:
        exit(0);
        break;    

    default:
        printf("Invalid Choise!\nPlease Try Again...\n");
        break;
    }
}

int main()
{
    while (1)
    {
        mainMenu();
    }
    
    return 0;
}