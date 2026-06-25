#include<stdio.h>
int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d",&num);

    int arr[num];
    
    for (int i = 0 ; i < num ; i++)
    {
        printf("Enter the Element : ");
        scanf("%d",&arr[i]);
    }

    int smallest = arr[0];
    int smallest_position = 0;
    int largest = arr[0];
    int largest_position = 0;

    for (int i = 0 ; i < num ; i++)
    {
        if (smallest > arr[i])
        {
            smallest = arr[i];
            smallest_position = i;
        }
        if (largest < arr[i])
        {
            largest = arr[i];
            largest_position = i;
        }
    }

    printf("Smallest Index : %d\n",smallest_position + 1);
    printf("Largest Index : %d",largest_position + 1);
    
    
}