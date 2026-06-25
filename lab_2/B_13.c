#include<stdio.h>
int main()
{
    int start,end;
    printf("Enter the starting number : ");
    scanf("%d",&start);
    printf("Enter the ending number : ");
    scanf("%d",&end);

    int flag;

    for (int i = start ; i <= end ; i++)
    {
        flag = 0;
        for (int j = 1 ; j <= i; j++)
        {
            if (i % j == 0)
            {
                flag++;
            }
        }
        if (flag == 2)
        {
            printf("%d ",i);
        }
    }
    


    return 0;
}