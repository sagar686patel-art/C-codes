#include<stdio.h>
int main()
{
    int i,n,j;
    int nst;
    printf("Enter number of columns:");
    scanf("%d",&n);
    nst=n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=nst; j++)
        {   
         printf("*");
        }
        printf("\n");
        nst--;
    }
}