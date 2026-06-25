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

    int new_num;
    printf("Enter the new number : ");
    scanf("%d",&new_num);

    num++;
    for (int i = num - 1 ; i >= 0; i--)
    {
        if (arr[i - 1] >= new_num)
        {
            arr[i] = arr[i - 1];
        }
        else
        {
            arr[i] = new_num;
            break;
        }
    }    

    for (int i = 0 ; i < num ; i++)
    {
        printf("%d ",arr[i]);
    }
  
    return 0;
}