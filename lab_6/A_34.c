#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ip;
    char *cp;
    float *fp;

    ip = (int *)(malloc(sizeof(int)));
    cp = (char *)(malloc(sizeof(char)));
    fp = (float *)(malloc(sizeof(float)));

    if (ip && cp && fp)
    {
        *ip = 324;
        *cp = 'K';
        *fp = 27.9;
    }

    printf("int = %d\nchar = %c\nfloat = %f",*ip,*cp,*fp);

    free(ip);
    free(cp);
    free(fp);
    
    return 0;
    
}