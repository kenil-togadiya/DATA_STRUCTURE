#include<stdio.h>
int main()
{
    int arr1[3][2],arr2[2][3];
    int multi[3][3];

    for (int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the Element [%d][%d]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the second matrix of element\n");
    for (int i = 0 ; i < 2 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the Element [%d][%d]: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0 ; j < 3; j++)
        {
            multi[i][j] = 0;
            for (int k = 0 ; k < 2 ; k++)
            {
                multi[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",multi[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}