#include<stdio.h>
int main()
{
    int array_1,array_2;
    
    printf("Enter the size of array - 1 : ");
    scanf("%d",&array_1);
    
    int arr1[array_1];
    
    for (int i = 0; i < array_1; i++)
    {
        printf("Enter the Element %d : ", i + 1);
        scanf("%d",&arr1[i]);
    }

    printf("\n");
    
    printf("Enter the size of array - 2 : ");
    scanf("%d",&array_2);
    
    int arr2[array_2];
    
    for (int i = 0; i < array_2 ; i++)
    {
        printf("Enter the Element %d : ", i + 1);
        scanf("%d",&arr2[i]);
    }

    int len = array_1 + array_2;
    int j = 0;

    for (int i = array_1 ; i < len ; i++)
    {
        array_1++;
        arr1[i] = arr2[j];
        j++; 
    }

    printf("\n");
    for (int i = 0 ; i < len ; i++)
    {
        printf("%d ",arr1[i]);
    }

}