#include<stdio.h>
int main()
{
    int n,i,nsp,nst,c,j;
    printf("Enter number of rows 7 columns: ");
    scanf("%d%d",&n,&c);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==1 || j==1 || i==n && j<=n/2+1 || j==n/2+1 && i>=n/2+1 || i==n/2+1 && j>=n/2+1 || j==n && i>=n/2+1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}