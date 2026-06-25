#include<stdio.h>
int main()
{
    char c;
    printf("Enter the chracter : ");
    scanf("%c",&c);

    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("%c is a vowel chracter",c);
    }
    else
    {
        printf("%c is not vowel but %c is a consonant",c);
    }
    

    return 0;
}