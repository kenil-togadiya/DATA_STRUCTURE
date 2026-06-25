#include<stdio.h>
int main()
{
    int seconds;

    printf("Enter the second : ");
    scanf("%d",&seconds);

    int hour,minute,second;

    hour = seconds / 3600;
    minute = (seconds % 3600) / 60;
    second = (seconds % 3600) % 60;

    printf("%d:%d:%d",hour,minute,second);

}