#include<stdio.h>
int main()
{
    int n,i,nsp,nst,j;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==n || i+j==n+1 || j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}