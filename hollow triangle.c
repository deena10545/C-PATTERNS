#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The hollow triangle :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n-1;j++)
        {
            if(i==n-1 || i+j==n-1 || i+j==(n-1)+ (2*i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
