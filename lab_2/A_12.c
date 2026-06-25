#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    int flag = 0;
    int temp = num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            flag++;
        }
    }

    if (flag == 2)
    {
        printf("%d is a prime number",temp);
    }
    else
    {
        printf("%d is not prime number",temp);
    }
    
    
    return 0;
}