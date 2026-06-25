#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter the array : ");
    scanf("%d",&num);

    int k = 0;

    for (int i = 0; i < num; i++)
    {
        for(int l = 1 ; l < num - i ; l++)
        {
            printf(" ");
        }

        k = 1;

        for (int j = 0 ; j <= i; j++)
        {
            printf("%d ",k);
            k = k * (i - j) / (j + 1);
        }
        
        printf("\n");
    }
    return 0;
}