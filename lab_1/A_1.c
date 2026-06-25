#include<stdio.h>
int main()
{
    int radius;

    printf("Enter the radius of circle : ");
    scanf("%d",&radius);

    float result = 3.142857 * radius * radius;

    printf("Area of circle : %f",result);
}