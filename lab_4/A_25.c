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

    int position;

    printf("Enter the position of delete a new number : ");
    scanf("%d",&position);

    num--;
    for (int i = position ; i < num + 1; i++)
    {
       arr[i - 1] = arr[i];
    }

    for (int i = 0 ; i < num; i++)
    {
        printf("%d ",arr[i]);
    }
}