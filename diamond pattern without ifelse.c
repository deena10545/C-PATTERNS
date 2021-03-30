#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    int space=n-1,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<space;j++)
            printf(" ");
        for(j=0;j<2*i+1;j++)
            printf("*");
        printf("\n");
        space--;
    }
    space=1;
    for(i=n-1;i>0;i--)
    {
        for(j=0;j<space;j++)
            printf(" ");
        for(j=0;j<2*i-1;j++)
            printf("*");
        printf("\n");
        space++;
    }
}
