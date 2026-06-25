#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;

    printf("Enter the raw : ");
    scanf("%d",&r1);

    printf("Enter the column : ");
    scanf("%d",&c1);

    int arr1[r1][c1],arr2[r1][c1];
    int sum[r1][c1];

    printf("\nEnter the first matrix of element\n");
    for (int i = 0 ; i < r1 ; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter the Element [%d][%d]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the second matrix of element\n");
    for (int i = 0 ; i < r1 ; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter the Element [%d][%d]: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }
    for (int i = 0 ; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }   
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    
    
}