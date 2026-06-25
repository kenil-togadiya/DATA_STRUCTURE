#include<stdio.h>
int main()
{
    int num;
    printf("Enter the size of array : ");
    scanf("%d",&num);

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        printf("Enter the Element : ");
        scanf("%d",&arr[i]);
    }

    for (int i = 0 ; i < num ; i++)
    {
        for (int j = i + 1; j < num ; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < num ; k++)
                {
                    arr[k] = arr[k + 1];
                }
                num--;
                j--;
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
}