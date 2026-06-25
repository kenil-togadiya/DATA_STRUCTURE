#include<stdio.h>
int main()
{
    int num;
    printf("Enter the size of array : ");
    scanf("%d",&num);

    int arr[num];

    for (int i = 0 ; i < num ; i++)
    {
        printf("Enter the element : ");
        scanf("%d",&arr[i]);
    }

    int delete_num;
    printf("Enter the delete number : ");
    scanf("%d",&delete_num);

    num--;
    for (int i = 0 ; i < num ; i++)
    {
        if (arr[i] == delete_num)
        {
            for (int j = i ; j < num ; j++)
            {
                arr[j] = arr[j + 1];
            }
        } 
    }
    for (int i = 0 ; i < num ; i++)
    {
        printf("%d ",arr[i]);
    }
}