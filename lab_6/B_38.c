#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;

    printf("Enter the size of array : ");
    scanf("%d",&num);

    char *arr;

    arr = (char *)(malloc(num * sizeof(char)));

    if (arr == NULL)
    {
        printf("Memory allocation is failed!");
        return 1;
    }

    for (int i = 0; i < num; i++)
    {
        printf("Enter the element : ");
        scanf(" %c",(arr + i));
    }

    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0 ; j < num - i - 1 ; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                char temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        printf(" %c ",*(arr + i));
    }
    
    free(arr);

    return 0;
}