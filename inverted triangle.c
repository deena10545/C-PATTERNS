/*ip: 3
op:
    *****
     ***
      *
      */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    printf("The inverted triangle :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n-1;j++)
        {
            if(i+j>=2*i && i+j<=2*n-2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
