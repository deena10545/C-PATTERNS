/* ip:5

    * * * * *
    * *   * *
    *   *   *
    * *   * *
    * * * * *      */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i==0 ||j==0) || (i==n-1 ||j==n-1) || (i+j==2*i || i+j==n-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
