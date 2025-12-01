#include<stdio.h>
int main()
{
    int n,i,x,s;
    printf("Enter number: ");
    scanf("%d %d",&n,&x);
    if(n>x)
        s=x;
    else
        s=n;
    for(i=s; i>=1; i--)
    {
        if(n%i==0 && x%i==0)
        {
            printf("HCF= %d",i);
            break;
        }
    }
}


