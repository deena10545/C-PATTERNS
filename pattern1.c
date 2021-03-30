/* ip: 3
    *    *
    **  **
    ******
    **  **
    *    *
           */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    for(i=0;i<2*n-1;i++)
    {
        for(j=0;j<2*n;j++)
        {
            if((i+j<=2*i || i+j>=2*n-1) &&(i+j<=2*n-2 || j-i>=1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
