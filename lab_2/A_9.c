#include<stdio.h>
int main()
{
    int base,power;
    printf("Enter the base number : ");
    scanf("%d",&base);
    printf("Enter the power number : ");
    scanf("%d",&power);

    int result = 1;
    for (int i = 1 ; i <= power; i++)
    {
        result = result * base;
    }

    printf("Power number : %d",result);

}