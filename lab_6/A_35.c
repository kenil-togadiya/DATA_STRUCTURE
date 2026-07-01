#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;

    printf("Enter the size of array : ");
    scanf("%d",&num);

    int *arr;

    arr = (int *)(malloc(num * sizeof(int)));

    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
    }
    

    for (int i = 0 ; i < num ; i++)
    {
        printf("Enter the Element : ");
        scanf("%d",(arr + i));
    }

    for (int i = 0 ; i < num ; i++)
    {
        printf("%d ", *(arr + i));
    }

    free(arr);

    return 0;
    
}