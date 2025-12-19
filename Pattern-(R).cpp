#include<stdio.h>
int main()
{
    int n,i,nsp,nst,c,j;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j==1 || i==1 || i==n/2+1 || j==n && i<=n/2+1 || i==j && i>=n/2+1)
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