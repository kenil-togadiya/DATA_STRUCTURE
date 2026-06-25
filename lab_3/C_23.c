#include <stdio.h>
#include <string.h>
int main()
{
    int num;
    printf("Enter the number of names : ");
    scanf("%d", &num);

    char str[num][100];
    char temp[100];

    for (int i = 0; i < num; i++)
    {
        printf("Enter the names : ");
        scanf("%s", &str[i]);
    }

    for (int i = 0; i < num - 1; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("\nNames in alphabetical order:\n");
    for (int i = 0; i < num; i++)
    {
        printf("%s\n", str[i]);
    }
}