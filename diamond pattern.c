/*n=3
        *
      * * *
    * * * * *
      * * *
        *

        */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<2*n-1;i++)
    {
        for(j=0;j<2*n-1;j++)
        {
            if((i+j>=n-1 && j-i<=n-1) && (i-j<=n-1  && i+j<=3*(n-1)))

                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
