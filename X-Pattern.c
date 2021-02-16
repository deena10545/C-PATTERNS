#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50];
    int i,j;
    printf("Enter a string:\n");
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        for(j=0;j<strlen(a);j++)
        {
            if(i==j)
                printf("%c",a[i]);
            else if(i+j==strlen(a)-1)
                printf("%c",a[j]);
            else
                printf("  ");
        }
        printf("\n");
    }
}
