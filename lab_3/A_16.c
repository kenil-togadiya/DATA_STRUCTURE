#include<stdio.h>
int main()
{
    int num;

    printf("Enter the size of array : ");
    scanf("%d",&num);

    int arr[num];

    for (int i = 0 ; i < num ; i++)
    {
        printf("Enter the Element : ");
        scanf("%d",&arr[i]);
    }

    for (int i = 0 ; i < num ; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}