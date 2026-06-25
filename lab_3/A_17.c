#include<stdio.h>
int main()
{
    int num;

    printf("Enter the size of array : ");
    scanf("%d",&num);

    int arr[num];
    int sum = 0;

    for (int i = 0 ; i < num ; i++)
    {
        printf("Enter the Element - %d : ",i + 1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0 ; i < num ; i++)
    {
        sum += arr[i];
    }

    printf("Sum of all element : %d",sum);

    return 0;
}