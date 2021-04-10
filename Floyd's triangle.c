/* 1
   2 3
   4 5 6
   7 8 9 10  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,num=1;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d ",num++);
        printf("\n");
    }
}
