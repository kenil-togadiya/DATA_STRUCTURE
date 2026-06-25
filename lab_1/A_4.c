#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter the number-1 : ");
    scanf("%d",&a);

    printf("Enter the number-2 : ");
    scanf("%d",&b);

    printf("Enter the number-3 : ");
    scanf("%d",&c);

    if (a > b && a > c)
    {
        printf("%d is a largerst number",a);
    }
    else if(b > a && b > c)
    {
        printf("%d is a largest number",b);
    }
    else
    {
        printf("%d is a largest number",c);
    }
    
}