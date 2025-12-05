#include<stdio.h>
int main()
{
    int n,i,nsp,nst,j;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    nst=1;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=nst; j++)
        {
            printf("*");
        }
        printf("\n");
        if(i<=n/2)
            nst++;
        else
        {
            nst--;
        }
    }
}