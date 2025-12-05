#include<stdio.h>
int main()
{
    int n,i,nsp,nst,j;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    nst=1;
    nsp=n-3;
    for(i=1; i<=n; i++)
    {
        for(j=1;j<=nsp;j++)
        {
         printf("   ");
        } 
        for(j=1; j<=nst; j++)
        {
            printf(" * ");
        }
        printf("\n");
        if(i<=n/2)
         {
            nsp--;
            nst+=2;
         }
        else
        {
            nsp++;
            nst-=2;
        }
    }
}