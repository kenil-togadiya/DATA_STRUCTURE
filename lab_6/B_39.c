#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];

    printf("Enter the String : ");
    gets(str);

    char *start;
    char *end;
    int length = 0,flag = 1;

    start = str;

    while (*(start + length) != '\0')
    {
        length++;
    }

    end = str + length - 1;

    while (start < end)
    {
        if (*start == *end)
        {
            start++;
            end--;
            continue;
        }

        flag = 0;
        break;
    }
    
    if (flag)
    {
        printf("\nString is palindrome\n");
    }
    else
    {
        printf("String is not palindrome\n");
    }
    
    return 0;
}