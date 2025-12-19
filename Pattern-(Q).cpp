#include<stdio.h>
int main()
{
    int n,i,nsp,nst,c,j;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=1; i<=n+2; i++)
    {
        for(j=1; j<=n+2; j++)
        {
            if(i==1 && j<=n-1 || i==n  && j<=n-1|| j==1 && i<=n-1 || j==n && i<=n-1|| i==j && i>=n/2+1 )
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