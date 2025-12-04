#include<stdio.h>
int main()
{
    int i,n,j;
    int nst,sp;
    printf("Enter number of lines:");
    scanf("%d",&n);
    nst=1;
    
    for(i=1; i<=n; i++)
    {
       for(sp=n-1;sp>=i;sp--)
         {
          printf(" ");
        } 
        for(j=1; j<=nst; j++)
        {
            printf("*");
        }
        printf("\n");
        nst+=2;

    }
}