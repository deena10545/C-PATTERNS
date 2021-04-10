 /*     1
       1 1
      1 2 1
     1 3 3 1
    1 4 6 4 1    */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,space,num=1;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(space=1;space<n-i;space++)
            printf(" ");
        for(j=0;j<=i;j++)
        {
            if(i==0 || j==0)
                num=1;
            else
                num=num*(i-j+1)/j;
            printf("%d ",num);
        }
        printf("\n");
    }

}
