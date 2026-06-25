#include<stdio.h>
int main()
{
    int days;

    printf("Enter the days : ");
    scanf("%d",&days);

    int year,week,day;

    year = days / 365;
    week = (days % 365) / 7;
    day = (days % 365) % 7;

    printf("%d year , %d week and %d days",year,week,day);
}