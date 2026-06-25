#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    int sum = 0;

    printf("Sum of Series : ");
    for (int i = 1; i <= num; i++)
    {
        printf("(");
        for (int j = 1; j <= i; j++)
        {
            sum = sum + j;
            printf("%d", j);

            if (j == i)
            {
                break;
            }
            else
            {
                printf("+");
            }
        }
        printf(")");
        if (i == num)
        {
            break;
        }
        else
        {
            printf("+");
        }
    }

    printf("\nAnswer : %d", sum);

    //(num * num + 1)/2
}