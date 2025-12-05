#include<stdio.h>
int main()
{
    int n,i,j,nst,nsp;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    nst=n;
    for(i=1; i<=n; i++)
    {
        for(nsp=0; nsp<i-1; nsp++)
        {
            printf(" ");
        }
        for(j=1; j<=nst; j++)
        {
            printf("*");
        }
        printf("\n");
        nst--;
    }
}