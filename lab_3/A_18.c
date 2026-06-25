#include<stdio.h>
int main()
{
    int num;

    printf("Enter the size of array : ");
    scanf("%d",&num);

    int arr[num];
    int sum = 0,average = 0;

    for (int i = 0 ; i < num ; i++)
    {
        printf("Enter the Element - %d : ",i + 1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0 ; i < num ; i++)
    {
        sum += arr[i];
    }

    average = sum / num;

    printf("Average of all element : %d",average);

    return 0;
}