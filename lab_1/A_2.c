#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    if (num % 2 == 0)
    {
        printf("%d is a Even number",num);
    }
    else
    {
        printf("%d is a Odd number",num);
    }
    
}