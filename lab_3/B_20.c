#include<stdio.h>
int main()
{
    int num;

    printf("Enter the size of array : ");
    scanf("%d",&num);

    int arr[num];

    for (int i = 0 ; i < num ; i++)
    {
        printf("Enter the Element - %d : ",i + 1);
        scanf("%d",&arr[i]);
    }

    int temp = 0;
    for (int i = 0 ; i < num ; i++)
    {
        for (int j = i + 1 ; j < num ; j++)
        {
            if (arr[i] == arr[j])
            {
                temp = 1;
                printf("The array contains a Duplicate number");
                break;
            }
        }
        if (temp == 1)
        {
            break;
        }   
    }

    if (temp == 0)
    {
        printf("The array contains Not Duplicate number");
    }
    
    

    return 0;
}