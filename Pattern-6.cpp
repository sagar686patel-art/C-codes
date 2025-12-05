#include<stdio.h>
int main()
{
    int n,i,j,nst,nsp;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    nst=1;
    for(i=1; i<=n; i++)
    {
        for(nsp=n-1; nsp>i-1; nsp--)
        {
            printf(" ");
        }
        for(j=1; j<=nst; j++)
        {
            printf("*");
        }
        printf("\n");
        nst++;
    }
}