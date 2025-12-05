#include<stdio.h>
int main()
{
    int n,nst,nsp,i,j;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    nst=1;
    nsp=n-2;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=nst; j++)
        {
            printf(" * ");
        }
        for(j=1; j<=nsp; j++)
        {
            printf("   ");
        }
        for(j=1; j<=nst; j++)
        {
            printf(" * ");
        }
        printf("  \n");
        if(i<=n/2)
        {
            nst++;
            nsp-=2;
        }
        else
        {
            nst--;
            nsp+=2;
        }
    }
}