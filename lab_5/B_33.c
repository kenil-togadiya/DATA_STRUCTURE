#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>

void sortstring(char word[])
{
    for (int i = 0; i < strlen(word); i++)
    {
        for (int j = 0; j < strlen(word) ; j++)
        {
            if (word[i] > word[j])
            {
                    char temp = word[i];
                    word[i] = word[j];
                    word[j] = temp;
            }   
        }   
    }   
}

int main()
{
    int num_words;
    printf("Enter the number of words : ");
    scanf("%d",&num_words);

    char words[num_words][50];

    for (int i = 0 ; i < num_words ; i++)
    {
        printf("Enter the words %d : ",i+1);
        scanf("%s" , words[i]);
    }

    srand(time(NULL));
    int random = rand() % num_words;

    char found_word[50];

    strcpy(found_word, words[random]);
    
    printf("\nRandom Word: %s\n", found_word);
    
    char anagram[50];
    printf("Enter the Anagram : ");
    scanf("%s",anagram);

    int anagram_length = strlen(anagram);
    
    if (strlen(found_word) != strlen(anagram))
    {
        printf("\nNot Anagram\n");
    }
    
    sortstring(anagram);
    sortstring(found_word);

    if (strcmp(anagram , found_word) == 0)
    {
        printf("\nValid Anagram\n");
    }
    else
    {
        printf("Not Anagram\n");
    }
}