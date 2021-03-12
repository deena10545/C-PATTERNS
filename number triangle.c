// C program to print number triangle...
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter the range:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int num=1;
        int s=i;
        for(j=0;j<2*n-1;j++)
        {
            if(i+j>=n-1 && i+j<=(n-1)+2*i)
            {
                if(j<=n-1)
                {
                    printf("%d",num);
                    num++;
                }
                else
                {
                    printf("%d",s);
                    s--;
                }
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
