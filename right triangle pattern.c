#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=0;j<i-1;j++)
            printf("  ");
        for(k=0;k<=n-i;k++)
            printf("*");
        printf("\n");
    }
}
