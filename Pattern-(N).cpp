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
            if(j==1 || i==j || j==n)
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