#include<stdio.h>
int main()
{
    int n,i,nsp,nst,c,j;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(j==1 ||i==n || i+j==(c-n)+2 || j-i==c-n)
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