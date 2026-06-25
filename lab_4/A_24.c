#include<stdio.h>
int main()
{
    int num;

    printf("Enter the size of array :  ");
    scanf("%d",&num);

    int arr[num];

    for (int i = 0 ; i < num ; i++)
    {
        printf("Enter the Element : ");
        scanf("%d",&arr[i]);
    }

    int insert_num;
    int position;

    printf("Enter the insert a new number : ");
    scanf("%d",&insert_num);

    printf("Enter the position of insert a new number : ");
    scanf("%d",&position);


    
    for (int i = num ; i >= position ; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = insert_num;
    num++;
    
    for (int i = 0 ; i < num ; i++)
    {
        printf("%d ",arr[i]);
    } 
    
}