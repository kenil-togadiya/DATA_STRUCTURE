#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];

    printf("Enter the string : ");
    gets(str);

    for (int i = 0 ; i < strlen(str) ; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = tolower(str[i]);
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = toupper(str[i]);
        }
    }

    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c",str[i]);
    }
}  