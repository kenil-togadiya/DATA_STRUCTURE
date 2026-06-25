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

    int replace_num;
    printf("Enter the number which replace number of 2 : ");
    scanf("%d",&replace_num);

    int new_num;
    printf("Enter the new number : ");
    scanf("%d",&new_num);

    int comma = 1;

    printf("Index of Replace of number : ");
    for (int i = 0 ; i < num ; i++)
    {
        if (arr[i] == replace_num)
        {
            arr[i] = new_num;

            if (!comma)
            {
                printf(", ");
            }
            
            printf("%d",i);
            comma = 0;
        }
    }

    printf("\n");

    for (int i = 0 ; i < num ; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}