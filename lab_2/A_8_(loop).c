#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    int result = 1;

    for (int i = 1 ; i <= num ; i++)
    {
        result = result * i;
    }
    printf("Factorial number : %d",result);
    
    return 0;
}