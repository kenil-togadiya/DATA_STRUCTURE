#include <stdio.h>
int main()
{

    int rem, sum = 0;

    for (int i = 1; i <= 1000; i++)
    {
        int temp = i;
        while (i > 0)
        {
            rem = i % 10;
            sum = sum + rem * rem * rem;
            i = i / 10;
        }

        if (temp == sum)
        {
            printf("%d ", temp);
        }
        sum = 0;
        i = temp;
    }
}