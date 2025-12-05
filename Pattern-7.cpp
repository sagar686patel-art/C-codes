#include<stdio.h>
int main()
{
    int n,i,nsp,nst,j;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    nsp=2*n-3;
    nst=1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=nst; j++)
        {
            printf("*");
        }
        for(j=1; j<=nsp; j++)
        {
            printf(" ");
        }
        for(j=1; j<=nst; j++)
        {
            printf("*");
        }
        printf("\n");
        nst++;
        nsp-=2;
    }
}    