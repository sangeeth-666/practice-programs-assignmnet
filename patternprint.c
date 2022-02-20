#include <stdio.h>

int main()
{
    int i,j,k,m;
    const int n=5;
    n=6;
    m=n;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
    
        for(k=1;k<=m;k++)
        {
            printf("*");
        }
        m--;
        printf("\n");
    }
    return 0;
}

