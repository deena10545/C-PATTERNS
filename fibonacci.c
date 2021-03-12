#include<stdio.h>
int main()
{
    int n,i,j,t3;
    printf("Enter the number:");
    scanf("%d",&n);
    int t1=1,t2=1;
    int t=1;
    for(i=0;i<n;i++)
    {
        t1=t2=1;
        for(j=0;j<n;j++)
        {
            t3=t1+t2;
            if(i+j<=2*i)
            {
                if(j<2)
                {
                    printf("%d",t1);
                }
                else
                {
                    t1=t2;
                    t2=t3;
                    printf("%d",t3);
                }
            }
            else
                {
                    printf(" ");
                }

        }
        printf("\n");

    }
}
