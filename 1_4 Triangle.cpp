#include<stdio.h>
void uplft(int x)
{
    for(int i=1; i<=x; i++)
    {
        for(int j=x; j>=i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
void lwlft(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void uprght(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int nsp=0; nsp<i-1; nsp++)
        {
            printf(" ");
        }
        for(int j=n; j>=i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
void lwrght(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int nsp=n-1; nsp>=i; nsp--)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    int x;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    printf("Select pattern.\n(1. Upper left triangle\n 2.  Lower left triangle\n 3.  Upper right triangle\n 4.  Lower right triangle )\nType your choice: ");
    scanf("%d",&x);
    if(x==1)
    {
        uplft(n);
    }
    else if(x==2)
    {
        lwlft(n);
    }
    else if(x==3)
    {
        uprght(n);
    }
    else if(x==4)
    {
        lwrght(n);
    }
    else
    {
        printf("Invalid Input.");
    }
}


