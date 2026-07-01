#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter the size of array : ");
    scanf("%d",&num);

    int arr[num];
    int *ptr;
    ptr = arr;
    
    for (int i = 0 ; i < num ; i++)
    {
        printf("Enter the Element : ");
        scanf("%d",(ptr + i));
    }

    int max = *arr;

    for (int i = 0; i < num; i++)
    {
        if (max < *(ptr + i))
        {
            max = *(ptr + i);
        }
    }

    printf("\nMaximum number : %d",max);
    
}